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
    QWidget *widget_background;
    QFrame *frame_login;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
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
    QLineEdit *lineE_username;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QFrame *frame_password;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
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

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QString::fromUtf8("LoginWidget"));
        LoginWidget->resize(800, 1000);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWidget->sizePolicy().hasHeightForWidth());
        LoginWidget->setSizePolicy(sizePolicy);
        LoginWidget->setMinimumSize(QSize(800, 1000));
        LoginWidget->setMaximumSize(QSize(800, 1000));
        LoginWidget->setStyleSheet(QString::fromUtf8(""));
        widget_background = new QWidget(LoginWidget);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setEnabled(false);
        widget_background->setGeometry(QRect(-40, 0, 800, 1000));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_background->sizePolicy().hasHeightForWidth());
        widget_background->setSizePolicy(sizePolicy1);
        widget_background->setMinimumSize(QSize(800, 1000));
        widget_background->setMaximumSize(QSize(800, 1000));
        frame_login = new QFrame(widget_background);
        frame_login->setObjectName(QString::fromUtf8("frame_login"));
        frame_login->setGeometry(QRect(50, 50, 500, 800));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_login->sizePolicy().hasHeightForWidth());
        frame_login->setSizePolicy(sizePolicy2);
        frame_login->setMinimumSize(QSize(500, 800));
        frame_login->setMaximumSize(QSize(500, 800));
        frame_login->setStyleSheet(QString::fromUtf8("QFrame#frame_login{\n"
"	border-radius: 30px;\n"
"	border-image:url(:/image/login_background);\n"
"}\n"
"\n"
"\n"
"QLabel #label_title {\n"
"	background-color: transparent;\n"
"	color: rgba(255,255,255,200);\n"
"}\n"
"\n"
""));
        frame_login->setFrameShape(QFrame::Shape::StyledPanel);
        frame_login->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_login);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(18, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(frame_login);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setStyleSheet(QString::fromUtf8("#label_title {\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"	font: 16pt \"\347\255\211\347\272\277\";\n"
"}"));

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
        frame_username->setStyleSheet(QString::fromUtf8("\n"
"#lineE_username {\n"
"	border: 1px solid #cccccc;\n"
"	border-radius: 10px;\n"
"	width: 180px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QFrame #frame_username {\n"
"		background-color: transparent;\n"
"		color: #fff;\n"
"		font: 16pt \"\347\255\211\347\272\277\";\n"
"}\n"
""));
        frame_username->setFrameShape(QFrame::Shape::StyledPanel);
        frame_username->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame_username);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
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
        frame_password->setStyleSheet(QString::fromUtf8("\n"
"#lineE_password {\n"
"	border: 1px solid #cccccc;\n"
"    padding: 5px;\n"
"	width: 180px;\n"
"	border-radius: 10px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QFrame #frame_password {\n"
"		background-color: transparent;\n"
"		color: #fff;\n"
"		font: 16pt \"\347\255\211\347\272\277\";\n"
"}\n"
""));
        frame_password->setFrameShape(QFrame::Shape::StyledPanel);
        frame_password->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame_password);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
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
        btn_register->setStyleSheet(QString::fromUtf8("#btn_register {\n"
"	background-color:#fff;\n"
"	font-size: 15px;\n"
"}"));

        horizontalLayout_16->addWidget(btn_register);

        btn_login = new QPushButton(frame_login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setStyleSheet(QString::fromUtf8("\n"
"#btn_login {\n"
"	font-size: 15px;\n"
"	background-color: #fff;\n"
"}"));

        horizontalLayout_16->addWidget(btn_login);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_16);

        verticalSpacer_10 = new QSpacerItem(18, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_10);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        lineE_username->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineE_password->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\345\257\206\347\240\201", nullptr));
        btn_register->setText(QCoreApplication::translate("LoginWidget", "\346\263\250\345\206\214", nullptr));
        btn_login->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
