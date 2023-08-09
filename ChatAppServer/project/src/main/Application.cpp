#include "Qt/ChatAppServer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChatAppServer w;
    w.show();
    return a.exec();
}
