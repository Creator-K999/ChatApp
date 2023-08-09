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
	QApplication m_App;
	ChatApp m_MainWindow;
	startDlgClass m_DialogWindow;
};
