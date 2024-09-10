/********************************************************************************
** Form generated from reading UI file 'registerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIDGET_H
#define UI_REGISTERWIDGET_H

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

class Ui_registerwidget
{
public:
    QFrame *frame_background;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
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
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QFrame *frame_confirm_password;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineE_confirm_password;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *btn_confirm;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *registerwidget)
    {
        if (registerwidget->objectName().isEmpty())
            registerwidget->setObjectName(QString::fromUtf8("registerwidget"));
        registerwidget->resize(957, 658);
        frame_background = new QFrame(registerwidget);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setGeometry(QRect(20, 10, 913, 648));
        frame_background->setStyleSheet(QString::fromUtf8("\n"
"QFrame #frame_background{\n"
"	border-radius: 30px;\n"
"	border-image:url(:/image/login_background);\n"
"}"));
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
        frame_login->setMinimumSize(QSize(300, 400));
        frame_login->setMaximumSize(QSize(300, 400));
        frame_login->setStyleSheet(QString::fromUtf8("\n"
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
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
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

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        frame_confirm_password = new QFrame(frame_login);
        frame_confirm_password->setObjectName(QString::fromUtf8("frame_confirm_password"));
        frame_confirm_password->setStyleSheet(QString::fromUtf8("\n"
"#lineE_confirm_password {\n"
"	border: 1px solid #cccccc;\n"
"    padding: 5px;\n"
"	width: 180px;\n"
"	border-radius: 10px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QFrame #frame_confirm_password {\n"
"		background-color: transparent;\n"
"		color: #fff;\n"
"		font: 16pt \"\347\255\211\347\272\277\";\n"
"}\n"
""));
        frame_confirm_password->setFrameShape(QFrame::Shape::StyledPanel);
        frame_confirm_password->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_4 = new QGridLayout(frame_confirm_password);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lineE_confirm_password = new QLineEdit(frame_confirm_password);
        lineE_confirm_password->setObjectName(QString::fromUtf8("lineE_confirm_password"));

        horizontalLayout_10->addWidget(lineE_confirm_password);


        gridLayout_4->addLayout(horizontalLayout_10, 0, 0, 1, 1);


        horizontalLayout_9->addWidget(frame_confirm_password);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalSpacer_4 = new QSpacerItem(18, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));

        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_21);

        btn_confirm = new QPushButton(frame_login);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setStyleSheet(QString::fromUtf8("#btn_register {\n"
"	background-color:#fff;\n"
"	font-size: 15px;\n"
"}"));

        horizontalLayout_16->addWidget(btn_confirm);

        btn_cancel = new QPushButton(frame_login);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setStyleSheet(QString::fromUtf8("\n"
"#btn_login {\n"
"	font-size: 15px;\n"
"	background-color: #fff;\n"
"}"));

        horizontalLayout_16->addWidget(btn_cancel);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_16);

        verticalSpacer_10 = new QSpacerItem(18, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_10);


        horizontalLayout_4->addWidget(frame_login);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        retranslateUi(registerwidget);

        QMetaObject::connectSlotsByName(registerwidget);
    } // setupUi

    void retranslateUi(QWidget *registerwidget)
    {
        registerwidget->setWindowTitle(QCoreApplication::translate("registerwidget", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("registerwidget", "\346\263\250\345\206\214", nullptr));
        lineE_username->setPlaceholderText(QCoreApplication::translate("registerwidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineE_password->setPlaceholderText(QCoreApplication::translate("registerwidget", "\345\257\206\347\240\201", nullptr));
        lineE_confirm_password->setPlaceholderText(QCoreApplication::translate("registerwidget", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        btn_confirm->setText(QCoreApplication::translate("registerwidget", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QCoreApplication::translate("registerwidget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerwidget: public Ui_registerwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIDGET_H
