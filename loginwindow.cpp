#include "loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
{
    // 创建布局
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    // 创建标题标签
    QLabel *titleLabel = new QLabel("Login", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 24px; font-weight: bold;");

    // 创建用户名输入框
    usernameEdit = new QLineEdit(this);
    usernameEdit->setPlaceholderText("Username");

    // 创建密码输入框
    passwordEdit = new QLineEdit(this);
    passwordEdit->setPlaceholderText("Password");
    passwordEdit->setEchoMode(QLineEdit::Password);

    // 创建登录按钮
    loginButton = new QPushButton("Login", this);

    // 添加控件到布局
    mainLayout->addWidget(titleLabel);
    mainLayout->addWidget(usernameEdit);
    mainLayout->addWidget(passwordEdit);
    mainLayout->addWidget(loginButton);

    // 设置窗口大小
    setLayout(mainLayout);
    resize(300, 200);
}
