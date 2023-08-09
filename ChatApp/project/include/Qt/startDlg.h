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
    bool m_NoNameProvided{};
    QDialogButtonBox* m_OkCancelBtnBox;
    QLineEdit* m_NameLnEdt;

private:
    Ui::startDlgClass m_Ui;
};
