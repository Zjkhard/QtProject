#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <qhostaddress.h>
ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    setWindowTitle("客户端");


    tcpSocket=NULL;
    //分配空间 指定父对象
    tcpSocket=new QTcpSocket(this);

    connect(tcpSocket,&QTcpSocket::connected,[=](){

        ui->txtRead->setText("成功和服务器建立好连接");
    });

    connect(tcpSocket,&QTcpSocket::readyRead,[=](){
       //获取对方发送的内容
        QByteArray array=tcpSocket->readAll();
        //追加到可读区
        ui->txtRead->append(array);
    });


}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_btnConnect_clicked()
{
    //获取服务器ip和端口
    QString ip=ui->txtIp->text();
    qint16 port=ui->txtPort->text().toInt();
    //主动和服务器建立连接
    tcpSocket->connectToHost(QHostAddress(ip),port);

}

void ClientWidget::on_btnSend_clicked()
{
    //获取编辑框内容
    QString str=ui->txtWrite->toPlainText();

    //发送数据
    tcpSocket->write(str.toUtf8().data());
}

void ClientWidget::on_btnClose_clicked()
{
    //主动和对方断开连接
    tcpSocket->disconnectFromHost();
}
