#include "login.h"
#include "ui_register.h"
#include "chat.h"
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->username->setPlaceholderText("Input username");
    ui->email->setPlaceholderText("Input email");
    ui->password->setPlaceholderText("Input password");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QString login = ui->username->text();
    QString email = ui->email->text();
    QString pass = ui->password->text();
    if ((login == "") || (email == "") || (pass == "")){
        QMessageBox::warning(this,"Error","Please put fill all lines!");
        return;
    }
    if(login.length() < 3) {
        QMessageBox::warning(this,"Error","Length of login must be at least 3 characters!");
        return;
    }
    if(email.length() < 10) {
        QMessageBox::warning(this,"Error","That doesn't look like a real email...");
        return;
    }
    if(pass.length() < 8) {
        QMessageBox::warning(this,"Error","Length of password must be at least 8 characters!");
        return;
    }
    hide();
    Chat window;
    window.setModal(true);
    window.exec();
}

void Login::on_pushButton_2_clicked()
{
    QString login = ui->username->text();
    QString email = ui->email->text();
    QString pass = ui->password->text();
    if ((login == "") || (email == "") || (pass == "")){
        QMessageBox::warning(this,"Error","Please put fill all lines!");
    }else{
        hide();
        Chat window;
        window.setModal(true);
        window.exec();
    }
}
