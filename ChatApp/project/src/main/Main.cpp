#include "main/Main.h"

Main::Main(int argc, char* argv[])
	: app(argc, argv)
{
    if (!mainWindow.onlineLstWdgt || !dialogWindow.okCancelBtnBox)
        throw std::runtime_error("Failed to find some childs");

    QObject::connect(dialogWindow.okCancelBtnBox, &QDialogButtonBox::clicked, [&](QAbstractButton* button)
    {
        if (button == dialogWindow.okCancelBtnBox->button(QDialogButtonBox::Ok))
            mainWindow.onlineLstWdgt->addItem("Ok");
    });
}

Main::~Main()
{
}

int Main::Run()
{
    mainWindow.show();

    if (dialogWindow.exec() == QDialog::Rejected)
        return 0;

	return app.exec();
}