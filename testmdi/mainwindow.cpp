#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto m_webView = new QWebEngineView;
    m_webView->resize(100,100);
    auto it = ui->mdiArea->addSubWindow(m_webView );
    it->resize(100,100);
    it->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
