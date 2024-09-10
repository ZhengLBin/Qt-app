#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginwidget.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow) // 初始化 loginWidget
{
    loginWidget = new LoginWidget(this);
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);
    setCentralWidget(loginWidget);
}


MainWindow::~MainWindow()
{
    delete ui;
    if(loginWidget) {
        delete loginWidget;
        loginWidget = nullptr;
    }

}
