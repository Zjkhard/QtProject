#include "serverwidget.h"
#include "ui_serverwidget.h"

ServerWidget::ServerWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServerWidget)
{
    ui->setupUi(this);
    tcpServer=NULL;
    tcpSocket=NULL;

    //监听套接字
    tcpServer=new QTcpServer(this);  //this 指定父对象 让其自动回收空间

    //绑定 与 监听 一起
    tcpServer->listen(QHostAddress::Any,8888);

    setWindowTitle("服务器: 8888");

    connect(tcpServer,&QTcpServer::newConnection,[=](){
       //取出建立好连接的套接字
        tcpSocket = tcpServer->nextPendingConnection();
        //获取对方的IP和端口
        QString IP=tcpSocket->peerAddress().toString();
        qint16 port=tcpSocket->peerPort();
        QString temp=QString("[%1:%2]:成功连接").arg(IP).arg(port);
        ui->txtRead->setText(temp);


        // 读数据 从通信套接字从取出内容
        connect(tcpSocket,&QTcpSocket::readyRead,
                [=](){
           //从通信套接字中取出内容
            QByteArray array=tcpSocket->readAll();
            ui->txtRead->append(array);
        });

    });





}

ServerWidget::~ServerWidget()
{
    delete ui;
}


void ServerWidget::on_btnSend_clicked()
{
    if(tcpSocket==NULL)
        return;
    //获取编辑区内容
    QString str=ui->txtWrite->toPlainText();
    //给对方发数据，使用套接字是tcpDocket
    tcpSocket->write(str.toUtf8().data());

}

void ServerWidget::on_btnClose_clicked()
{
    if(tcpSocket==NULL)
        return;

    //主动和客户端断开连接
    tcpSocket->disconnectFromHost();
    tcpSocket->close();
    tcpSocket=NULL;
}
