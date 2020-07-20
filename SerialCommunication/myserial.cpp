#include "myserial.h"
#include <QtSerialPort/QSerialPort>
#include <QDebug>

MySerial::MySerial(QObject *parent) : QObject(parent)
{
     serialPort =new QSerialPort();
}

bool MySerial:: connect(){
    if(strComNum==NULL||nBRate==NULL||dataBit==NULL||stopBits==NULL)  //||parity==NULL
    {
        qDebug()<<"串口参数不对";
        return false;
    }
    if(serialPort==NULL){
        serialPort =new QSerialPort();
    }
    serialPort->setPortName(strComNum);
    serialPort->setBaudRate(nBRate);
    serialPort->setDataBits(dataBit);
    serialPort->setParity(parity);
    serialPort->setStopBits(stopBits);
    serialPort->open(QIODevice::ReadWrite);
    isConnect=true;
    return true;
}

bool MySerial:: disConnect()
{
    if(isConnect){
        serialPort->close();
        isConnect=false;
    }
    return true;
}

void MySerial:: sendInfo(QString info)
{
    if(isConnect==false)
        return;
    if(isHexSend)
    {
        //serialPort->write(QString2Hex(info));
    }
    serialPort->write(info.toLatin1());
}

QString MySerial:: receiveInfo()
{
    if(isConnect==false)
        return NULL;
    return  serialPort->readAll();
}







