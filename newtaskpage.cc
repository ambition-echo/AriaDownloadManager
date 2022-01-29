#include "newtaskpage.hh"
#include "ui_newtaskpage.h"

NewTaskPage::NewTaskPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewTaskPage)
{
    ui->setupUi(this);
}

NewTaskPage::~NewTaskPage()
{
    delete ui;
}
