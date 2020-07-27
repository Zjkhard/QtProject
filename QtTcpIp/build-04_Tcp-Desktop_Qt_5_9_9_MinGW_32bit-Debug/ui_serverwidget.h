/********************************************************************************
** Form generated from reading UI file 'serverwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIDGET_H
#define UI_SERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWidget
{
public:
    QGridLayout *gridLayout;
    QTextEdit *txtRead;
    QTextEdit *txtWrite;
    QPushButton *btnSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QWidget *ServerWidget)
    {
        if (ServerWidget->objectName().isEmpty())
            ServerWidget->setObjectName(QStringLiteral("ServerWidget"));
        ServerWidget->resize(384, 422);
        gridLayout = new QGridLayout(ServerWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtRead = new QTextEdit(ServerWidget);
        txtRead->setObjectName(QStringLiteral("txtRead"));
        txtRead->setReadOnly(true);

        gridLayout->addWidget(txtRead, 0, 0, 1, 3);

        txtWrite = new QTextEdit(ServerWidget);
        txtWrite->setObjectName(QStringLiteral("txtWrite"));

        gridLayout->addWidget(txtWrite, 1, 0, 1, 3);

        btnSend = new QPushButton(ServerWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        gridLayout->addWidget(btnSend, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        btnClose = new QPushButton(ServerWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        gridLayout->addWidget(btnClose, 2, 2, 1, 1);


        retranslateUi(ServerWidget);

        QMetaObject::connectSlotsByName(ServerWidget);
    } // setupUi

    void retranslateUi(QWidget *ServerWidget)
    {
        ServerWidget->setWindowTitle(QApplication::translate("ServerWidget", "ServerWidget", Q_NULLPTR));
        btnSend->setText(QApplication::translate("ServerWidget", "send", Q_NULLPTR));
        btnClose->setText(QApplication::translate("ServerWidget", "close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ServerWidget: public Ui_ServerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIDGET_H
