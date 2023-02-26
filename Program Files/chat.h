#ifndef CHAT_H
#define CHAT_H

#include <QDialog>

namespace Ui {
class Chat;
}

class Chat : public QDialog
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr);
    ~Chat();

private slots:
    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Chat *ui;
};

#endif // CHAT_H
