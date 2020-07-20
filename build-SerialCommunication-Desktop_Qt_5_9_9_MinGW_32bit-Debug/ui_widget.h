/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *txtLine;
    QPushButton *btnSend;
    QListView *listView;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cmbSerialNumber;
    QLabel *label_2;
    QComboBox *cmbBaudrate;
    QLabel *label_3;
    QComboBox *cmbDataBit;
    QLabel *label_4;
    QComboBox *cmbCheckBit;
    QLabel *label_5;
    QComboBox *cmbStopBit;
    QPushButton *btnOpenSerial;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkHEXReceive;
    QCheckBox *chkHEXSend;
    QPushButton *btnStopReceive;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(668, 628);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtLine = new QLineEdit(widget);
        txtLine->setObjectName(QStringLiteral("txtLine"));

        gridLayout->addWidget(txtLine, 1, 0, 1, 1);

        btnSend = new QPushButton(widget);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        gridLayout->addWidget(btnSend, 1, 1, 1, 1);

        listView = new QListView(widget);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 2);


        gridLayout_2->addWidget(widget, 0, 0, 2, 1);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cmbSerialNumber = new QComboBox(widget_2);
        cmbSerialNumber->setObjectName(QStringLiteral("cmbSerialNumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cmbSerialNumber);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cmbBaudrate = new QComboBox(widget_2);
        cmbBaudrate->setObjectName(QStringLiteral("cmbBaudrate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cmbBaudrate);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        cmbDataBit = new QComboBox(widget_2);
        cmbDataBit->setObjectName(QStringLiteral("cmbDataBit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cmbDataBit);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        cmbCheckBit = new QComboBox(widget_2);
        cmbCheckBit->setObjectName(QStringLiteral("cmbCheckBit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cmbCheckBit);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        cmbStopBit = new QComboBox(widget_2);
        cmbStopBit->setObjectName(QStringLiteral("cmbStopBit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cmbStopBit);

        btnOpenSerial = new QPushButton(widget_2);
        btnOpenSerial->setObjectName(QStringLiteral("btnOpenSerial"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, btnOpenSerial);


        gridLayout_2->addWidget(widget_2, 0, 1, 1, 1);

        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        chkHEXReceive = new QCheckBox(widget_3);
        chkHEXReceive->setObjectName(QStringLiteral("chkHEXReceive"));

        verticalLayout->addWidget(chkHEXReceive);

        chkHEXSend = new QCheckBox(widget_3);
        chkHEXSend->setObjectName(QStringLiteral("chkHEXSend"));

        verticalLayout->addWidget(chkHEXSend);

        btnStopReceive = new QPushButton(widget_3);
        btnStopReceive->setObjectName(QStringLiteral("btnStopReceive"));

        verticalLayout->addWidget(btnStopReceive);


        gridLayout_2->addWidget(widget_3, 1, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btnSend->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        btnOpenSerial->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        chkHEXReceive->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266\346\216\245\346\224\266", Q_NULLPTR));
        chkHEXSend->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266\345\217\221\351\200\201", Q_NULLPTR));
        btnStopReceive->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\346\216\245\346\224\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
