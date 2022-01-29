#include "settingpahe.hh"
#include "ui_settingpahe.h"

SettingPahe::SettingPahe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingPahe)
{
    ui->setupUi(this);
}

SettingPahe::~SettingPahe()
{
    delete ui;
}
