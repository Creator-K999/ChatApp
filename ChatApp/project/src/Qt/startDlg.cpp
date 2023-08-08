#include "../../include/Qt/startDlg.h"

startDlgClass::startDlgClass(QWidget* parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    okCancelBtnBox = findChild<QDialogButtonBox*>("okCancelBtnBox");
    nameLnEdt = findChild<QLineEdit*>("nameLnEdt");
}

startDlgClass::~startDlgClass()
{}
