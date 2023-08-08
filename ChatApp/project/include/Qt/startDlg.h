#pragma once

#include <QtWidgets/QDialog>
#include "ui_startDlg.h"

class startDlgClass : public QDialog
{
    Q_OBJECT

public:
    startDlgClass(QWidget* parent = nullptr);
    ~startDlgClass();

public:
    bool noNameProvided{};
    QDialogButtonBox* okCancelBtnBox;
    QLineEdit* nameLnEdt;

private:
    Ui::startDlgClass ui;
};
