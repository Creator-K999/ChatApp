#pragma once

#include <QtWidgets/QApplication.h>

#include "Qt/ChatApp.h"
#include "Qt/startDlg.h"

class Main
{
public:
	Main(int argc, char* argv[]);
	~Main();

public:
	int Run();

private:
	QApplication app;
	ChatApp mainWindow;
	startDlgClass dialogWindow;
};
