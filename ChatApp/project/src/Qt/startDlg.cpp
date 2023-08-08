#include "../../include/Qt/startDlg.h"

startDlgClass::startDlgClass(QWidget* parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    okCancelBtnBox = findChild<QDialogButtonBox*>("okCancelBtnBox");
}

startDlgClass::~startDlgClass()
{}
