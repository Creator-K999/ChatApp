#include "main/Main.h"

Main::Main(int argc, char* argv[])
	: m_App(argc, argv)
{
    if (!m_MainWindow.m_OnlineLstWdgt || !m_DialogWindow.m_OkCancelBtnBox)
        throw std::runtime_error("Failed to find some childs");

    QObject::connect(m_DialogWindow.m_OkCancelBtnBox, &QDialogButtonBox::clicked, [&](QAbstractButton* button)
    {
        if (button == m_DialogWindow.m_OkCancelBtnBox->button(QDialogButtonBox::Ok))
        {
            QString name{ m_DialogWindow.m_NameLnEdt->text() };

            if (name.isEmpty())
            {
                m_DialogWindow.m_NoNameProvided = true;
                return;
            }

            m_MainWindow.m_OnlineLstWdgt->addItem(name);
            m_MainWindow.m_Name = name;
        }
    });
}

Main::~Main()
{
}

int Main::Run()
{
    m_MainWindow.show();

    if (m_DialogWindow.exec() == QDialog::Rejected || m_DialogWindow.m_NoNameProvided)
        return 0;

	return m_App.exec();
}