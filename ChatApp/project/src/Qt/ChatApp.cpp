#include "../../include/Qt/ChatApp.h"

ChatApp::ChatApp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    onlineLstWdgt = findChild<QListWidget*>("onlineLstWdgt");
}

ChatApp::~ChatApp()
{}
