#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<myserial.h>
#include<QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    bool isStopReceive=false;
    MySerial *mySerial;
    QStringList QLInfo;
    QTimer *timer1;
    void init();

    void showInfo(QString info);
private slots:
    void on_cmbSerialNumber_currentIndexChanged(const QString &arg1);

    void on_cmbBaudrate_currentTextChanged(const QString &arg1);

    void on_cmbDataBit_currentTextChanged(const QString &arg1);

    void on_cmbCheckBit_currentTextChanged(const QString &arg1);

    void on_cmbStopBit_currentTextChanged(const QString &arg1);

    void on_btnOpenSerial_clicked();

    void on_cmbBaudrate_currentIndexChanged(const QString &arg1);

    void on_chkHEXReceive_clicked();

    void on_chkHEXSend_clicked();

    void on_btnSend_clicked();

    void on_btnStopReceive_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
