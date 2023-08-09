#include "Qt/ChatApp.h"

#include <QtWidgets/QShortcut.h>

ChatApp::ChatApp(QWidget *parent)
    : QMainWindow(parent), m_Shortcut(QKeySequence(Qt::Key_Return), this), /*messageSender("127.0.0.1", 12345)*/
{
    m_Ui.setupUi(this);
    m_MessageLnEdt = findChild<QLineEdit*>("messageLnEdt");
    m_OnlineLstWdgt = findChild<QListWidget*>("onlineLstWdgt");
    m_MessagesLstWdgt = findChild<QListWidget*>("messagesLstWdgt");

    connect(&m_Shortcut, &QShortcut::activated, this, &ChatApp::sendMessage);
}

void ChatApp::sendMessage()
{
    m_MessagesLstWdgt->addItem(m_Name + ": " + m_MessageLnEdt->text());
    m_MessageLnEdt->clear();
}

ChatApp::~ChatApp()
{}
