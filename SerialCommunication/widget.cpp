#include "widget.h"
#include "ui_widget.h"
#include <qcombobox.h>
#include <QDebug>
#include <QStringListModel>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    init();

    timer1=new QTimer();

    //定时器信号槽 连接定时器事件
    connect(timer1,&QTimer::timeout,[=](){
       if(isStopReceive==false)
       {
           QString strReceive=mySerial->receiveInfo();
           if(strReceive!=""&&strReceive!=NULL)
                showInfo(strReceive);
       }

    });



    timer1->start(300);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::init()
{

    mySerial=new MySerial();

    ui->cmbSerialNumber->insertItem(0,"COM1");
    ui->cmbSerialNumber->insertItem(1,"COM2");
    ui->cmbSerialNumber->insertItem(2,"COM3");
    ui->cmbSerialNumber->insertItem(3,"COM4");

    ui->cmbBaudrate->insertItem(0,"9600");
    ui->cmbBaudrate->insertItem(1,"14400");
    ui->cmbBaudrate->insertItem(2,"19200");

    ui->cmbCheckBit->insertItem(0,"NONE");
    ui->cmbCheckBit->insertItem(1,"ODD");
    ui->cmbCheckBit->insertItem(2,"EVEN");

    ui->cmbDataBit->insertItem(0,"5");
    ui->cmbDataBit->insertItem(1,"6");
    ui->cmbDataBit->insertItem(2,"7");
    ui->cmbDataBit->insertItem(3,"8");

    ui->cmbStopBit->insertItem(0,"1");
    ui->cmbStopBit->insertItem(1,"1.5");
    ui->cmbStopBit->insertItem(2,"2");
}

void Widget::on_cmbSerialNumber_currentIndexChanged(const QString &arg1)
{
     mySerial->strComNum=ui->cmbSerialNumber->currentText();
     qDebug()<<"串口号:="<<mySerial->strComNum;
}

void Widget::on_cmbDataBit_currentTextChanged(const QString &arg1)
{
    if(ui->cmbDataBit->currentIndex()==0)
        mySerial->dataBit= QSerialPort::Data5;
    else if(ui->cmbDataBit->currentIndex()==1)
         mySerial->dataBit= QSerialPort::Data6;
    else if(ui->cmbDataBit->currentIndex()==2)
         mySerial->dataBit= QSerialPort::Data7;
    else if(ui->cmbDataBit->currentIndex()==3)
         mySerial->dataBit= QSerialPort::Data8;
    qDebug()<<"数据位:="<<mySerial->dataBit;

}

void Widget::on_cmbCheckBit_currentTextChanged(const QString &arg1)
{
     if(ui->cmbCheckBit->currentIndex()==0)
         mySerial->parity= QSerialPort::NoParity;
     else  if(ui->cmbCheckBit->currentIndex()==1)
          mySerial->parity= QSerialPort::OddParity;
     else  if(ui->cmbCheckBit->currentIndex()==2)
          mySerial->parity= QSerialPort::EvenParity;
     qDebug()<<"校验位:="<<mySerial->parity;
}

void Widget::on_cmbStopBit_currentTextChanged(const QString &arg1)
{
      if(ui->cmbStopBit->currentIndex()==0)
          mySerial->stopBits= QSerialPort::OneStop;
      else if(ui->cmbStopBit->currentIndex()==1)
            mySerial->stopBits= QSerialPort::OneAndHalfStop;
      else if(ui->cmbStopBit->currentIndex()==2)
           mySerial->stopBits= QSerialPort::TwoStop;
      qDebug()<<"停止位:="<<mySerial->stopBits;
}

void Widget::on_btnOpenSerial_clicked()
{
    if(mySerial->isConnect==false){
        if(mySerial->connect())
        {
            mySerial->isConnect=true;
            ui->btnOpenSerial->setText("关闭串口");
        }else{
             qDebug()<<"打开串口失败";
        }

    }else{
        mySerial->disConnect();
        mySerial->isConnect=false;
        ui->btnOpenSerial->setText("打开串口");
    }
}


void Widget::on_cmbBaudrate_currentIndexChanged(const QString &arg1)
{
    if(ui->cmbBaudrate->currentText()=="9600")
        mySerial->nBRate=9600;
    else if(ui->cmbBaudrate->currentText()=="14400")
         mySerial->nBRate=14400;
    else if(ui->cmbBaudrate->currentText()=="19200")
         mySerial->nBRate=19200;
    qDebug()<<"波特率:="<<mySerial->nBRate;
}

void Widget::on_chkHEXReceive_clicked()
{
    if(ui->chkHEXReceive->isChecked())
    {
        mySerial->isHexReceive=true;
    }else
    {
        mySerial->isHexReceive=false;
    }
     qDebug()<<"16进制接收:="<<mySerial->isHexReceive;
}

void Widget::on_chkHEXSend_clicked()
{
    if(ui->chkHEXSend->isChecked())
    {
        mySerial->isHexSend=true;
    }else
    {
        mySerial->isHexSend=false;
    }
     qDebug()<<"16进制发送:="<<mySerial->isHexSend;
}

void Widget::on_cmbBaudrate_currentTextChanged(const QString &arg1)
{

}

void Widget::on_btnSend_clicked()
{
    mySerial->sendInfo(ui->txtLine->text());
    showInfo(ui->txtLine->text());

}


void Widget:: showInfo(QString info)
{

    QLInfo += info;
    QStringListModel *model = new QStringListModel(QLInfo);
    ui->listView->setModel(model);
}

void Widget::on_btnStopReceive_clicked()
{
    if(isStopReceive==false){
        isStopReceive=true;
        ui->btnStopReceive->setText("开始接收");
    }else
    {
        isStopReceive=false;
           ui->btnStopReceive->setText("停止接收");
    }

}
