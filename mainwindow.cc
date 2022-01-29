#include "mainwindow.hh"
#include "newtaskpage.hh"
#include "qpushbutton.h"
#include "settingpage.hh"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::init()
{
    setWindowTitle("AriaDownloadManager");
    this->settingPage = new SettingPage(this);
    this->newTaskPage = new NewTaskPage(this);
    this->aboutPage = new AboutPage(this);
    connect(ui->newTaskAction, &QAction::triggered, newTaskPage, &NewTaskPage::show);
    connect(ui->settingAction, &QAction::triggered, settingPage, &SettingPage::show);
    connect(ui->settingBtn, &QPushButton::clicked, settingPage, &SettingPage::show);
    connect(ui->newTaskBtn, &QPushButton::clicked, newTaskPage, &NewTaskPage::show);
    connect(ui->aboutBtn, &QPushButton::clicked, aboutPage, &AboutPage::show);
}
