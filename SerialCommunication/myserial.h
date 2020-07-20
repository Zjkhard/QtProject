#ifndef MYSERIAL_H
#define MYSERIAL_H

#include <QObject>
#include <QWidget>
#include <QtSerialPort/QSerialPort>

class MySerial : public QObject
{
    Q_OBJECT
public:
    explicit MySerial(QObject *parent = nullptr);
    QSerialPort *serialPort;
    bool isConnect=false;  //是否连接
    bool isHexSend=false;        //是否按16进制发送
    bool isHexReceive=false;     //是否按16进制接收
    QString strComNum;  //
    int nBRate;         //波特率
    QSerialPort::DataBits dataBit; //数据位
    QSerialPort::Parity parity;    //奇偶校验位
    QSerialPort::StopBits stopBits; //停止位


    bool connect();                 //串口连接
    bool disConnect();              //断开连接
    void sendInfo(QString info);               //发送消息
    QString receiveInfo();             //接收消息



signals:

};

#endif // MYSERIAL_H
