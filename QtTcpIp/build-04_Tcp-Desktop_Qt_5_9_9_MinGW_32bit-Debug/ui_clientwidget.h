/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txtPort;
    QLabel *label_2;
    QLineEdit *txtIp;
    QPushButton *btnConnect;
    QTextEdit *txtRead;
    QTextEdit *txtWrite;
    QPushButton *btnSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(368, 452);
        gridLayout = new QGridLayout(ClientWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ClientWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtPort = new QLineEdit(ClientWidget);
        txtPort->setObjectName(QStringLiteral("txtPort"));

        gridLayout->addWidget(txtPort, 0, 1, 1, 1);

        label_2 = new QLabel(ClientWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtIp = new QLineEdit(ClientWidget);
        txtIp->setObjectName(QStringLiteral("txtIp"));

        gridLayout->addWidget(txtIp, 1, 1, 1, 1);

        btnConnect = new QPushButton(ClientWidget);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        gridLayout->addWidget(btnConnect, 1, 2, 1, 1);

        txtRead = new QTextEdit(ClientWidget);
        txtRead->setObjectName(QStringLiteral("txtRead"));
        txtRead->setReadOnly(true);

        gridLayout->addWidget(txtRead, 2, 0, 1, 3);

        txtWrite = new QTextEdit(ClientWidget);
        txtWrite->setObjectName(QStringLiteral("txtWrite"));

        gridLayout->addWidget(txtWrite, 3, 0, 1, 3);

        btnSend = new QPushButton(ClientWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        gridLayout->addWidget(btnSend, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(185, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        btnClose = new QPushButton(ClientWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        gridLayout->addWidget(btnClose, 4, 2, 1, 1);


        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        txtPort->setText(QApplication::translate("ClientWidget", "8888", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250IP\357\274\232", Q_NULLPTR));
        txtIp->setText(QApplication::translate("ClientWidget", "127.0.0.1", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("ClientWidget", "connect", Q_NULLPTR));
        btnSend->setText(QApplication::translate("ClientWidget", "send", Q_NULLPTR));
        btnClose->setText(QApplication::translate("ClientWidget", "close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
