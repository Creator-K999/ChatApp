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
    QDialogButtonBox* okCancelBtnBox;

private:
    Ui::startDlgClass ui;
};
