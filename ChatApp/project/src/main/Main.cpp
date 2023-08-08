#include "main/Main.h"

Main::Main(int argc, char* argv[])
	: app(argc, argv)
{
    if (!mainWindow.onlineLstWdgt || !dialogWindow.okCancelBtnBox)
        throw std::runtime_error("Failed to find some childs");

    QObject::connect(dialogWindow.okCancelBtnBox, &QDialogButtonBox::clicked, [&](QAbstractButton* button)
    {
        if (button == dialogWindow.okCancelBtnBox->button(QDialogButtonBox::Ok))
        {
            QString name{ dialogWindow.nameLnEdt->text() };

            if (name.isEmpty())
            {
                dialogWindow.noNameProvided = true;
                return;
            }

            mainWindow.onlineLstWdgt->addItem(name);
        }
    });
}

Main::~Main()
{
}

int Main::Run()
{
    mainWindow.show();

    if (dialogWindow.exec() == QDialog::Rejected || dialogWindow.noNameProvided)
        return 0;

	return app.exec();
}