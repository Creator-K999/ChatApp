#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChatApp.h"

class ChatApp : public QMainWindow
{
    Q_OBJECT

public:
    ChatApp(QWidget *parent = nullptr);
    ~ChatApp();

public:
    QListWidget* onlineLstWdgt;

private:
    Ui::ChatAppClass ui;
};
