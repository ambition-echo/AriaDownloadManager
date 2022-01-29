#include "settingpage.hh"
#include "ui_settingpage.h"

SettingPage::SettingPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingPage)
{
    ui->setupUi(this);
}

SettingPage::~SettingPage()
{
    delete ui;
}
