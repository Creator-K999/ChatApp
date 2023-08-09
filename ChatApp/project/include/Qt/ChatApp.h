#pragma once

#include "ui_ChatApp.h"

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QShortcut.h>

#include "processing/networking/Sender.h"

class ChatApp : public QMainWindow
{
    Q_OBJECT

public:
    ChatApp(QWidget *parent = nullptr);
    ~ChatApp();

public:
    void sendMessage();

public:
    QString m_Name;
    //Sender messageSender;

public:
    QLineEdit* m_MessageLnEdt;
    QListWidget* m_OnlineLstWdgt;
    QListWidget* m_MessagesLstWdgt;

private:
    Ui::ChatAppClass m_Ui;
    QShortcut m_Shortcut;
};
