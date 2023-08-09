#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChatAppServer.h"

class ChatAppServer : public QMainWindow
{
    Q_OBJECT

public:
    ChatAppServer(QWidget *parent = nullptr);
    ~ChatAppServer();

private:
    Ui::ChatAppServerClass ui;
};
