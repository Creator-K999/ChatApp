#include "Qt/startDlg.h"

startDlgClass::startDlgClass(QWidget* parent)
    : QDialog(parent)
{
    m_Ui.setupUi(this);
    m_OkCancelBtnBox = findChild<QDialogButtonBox*>("okCancelBtnBox");
    m_NameLnEdt = findChild<QLineEdit*>("nameLnEdt");
}

startDlgClass::~startDlgClass()
{}
