#include "chat.h"
#include "ui_chat.h"

Chat::Chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Enter your message");
}

Chat::~Chat()
{
    delete ui;
}

void Chat::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{

}

