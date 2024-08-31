/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame_background;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame_login;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_username;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_username;
    QLineEdit *lineE_username;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QFrame *frame_password;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_password;
    QLineEdit *lineE_password;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *btn_register;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QString::fromUtf8("LoginWidget"));
        LoginWidget->resize(639, 583);
        LoginWidget->setMinimumSize(QSize(0, 0));
        gridLayout_4 = new QGridLayout(LoginWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame_background = new QFrame(LoginWidget);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setFrameShape(QFrame::Shape::StyledPanel);
        frame_background->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame_background);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        frame_login = new QFrame(frame_background);
        frame_login->setObjectName(QString::fromUtf8("frame_login"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_login->sizePolicy().hasHeightForWidth());
        frame_login->setSizePolicy(sizePolicy);
        frame_login->setMinimumSize(QSize(400, 500));
        frame_login->setMaximumSize(QSize(400, 500));
        frame_login->setFrameShape(QFrame::Shape::StyledPanel);
        frame_login->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(frame_login);
        label_title->setObjectName(QString::fromUtf8("label_title"));

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(18, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        frame_username = new QFrame(frame_login);
        frame_username->setObjectName(QString::fromUtf8("frame_username"));
        frame_username->setStyleSheet(QString::fromUtf8("#label_username {\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"    padding: 5px;\n"
"}\n"
"#lineE_username {\n"
"	border: 1px solid #cccccc;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
""));
        frame_username->setFrameShape(QFrame::Shape::StyledPanel);
        frame_username->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame_username);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_username = new QLabel(frame_username);
        label_username->setObjectName(QString::fromUtf8("label_username"));

        horizontalLayout_2->addWidget(label_username);

        lineE_username = new QLineEdit(frame_username);
        lineE_username->setObjectName(QString::fromUtf8("lineE_username"));

        horizontalLayout_2->addWidget(lineE_username);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(frame_username);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        frame_password = new QFrame(frame_login);
        frame_password->setObjectName(QString::fromUtf8("frame_password"));
        frame_password->setStyleSheet(QString::fromUtf8("#label_password {\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"    padding: 5px;\n"
"}\n"
"#lineE_password {\n"
"	border: 1px solid #cccccc;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
""));
        frame_password->setFrameShape(QFrame::Shape::StyledPanel);
        frame_password->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame_password);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_password = new QLabel(frame_password);
        label_password->setObjectName(QString::fromUtf8("label_password"));

        horizontalLayout_8->addWidget(label_password);

        lineE_password = new QLineEdit(frame_password);
        lineE_password->setObjectName(QString::fromUtf8("lineE_password"));

        horizontalLayout_8->addWidget(lineE_password);


        gridLayout_3->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame_password);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(18, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));

        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_21);

        btn_register = new QPushButton(frame_login);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));

        horizontalLayout_16->addWidget(btn_register);

        btn_login = new QPushButton(frame_login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        horizontalLayout_16->addWidget(btn_login);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_16);

        verticalSpacer_10 = new QSpacerItem(18, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_10);

        verticalSpacer_5 = new QSpacerItem(18, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_5);


        horizontalLayout_4->addWidget(frame_login);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_background, 0, 0, 1, 1);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("LoginWidget", "LOGIN", nullptr));
        label_username->setText(QCoreApplication::translate("LoginWidget", "\350\264\246\345\217\267", nullptr));
        label_password->setText(QCoreApplication::translate("LoginWidget", "\345\257\206\347\240\201", nullptr));
        btn_register->setText(QCoreApplication::translate("LoginWidget", "\346\263\250\345\206\214", nullptr));
        btn_login->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
