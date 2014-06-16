#include "madmainform.h"
#include "ui_madmainformbase.h"

MadMainForm::MadMainForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MadMainForm)
{
    ui->setupUi(this);
}

MadMainForm::~MadMainForm()
{
    delete ui;
}
