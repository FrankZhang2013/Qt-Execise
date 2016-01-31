/********************************************************************************
** Form generated from reading UI file 'welcomedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEDIALOG_H
#define UI_WELCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeDialog
{
public:
    QPushButton *EnterMainWinButton;

    void setupUi(QDialog *WelcomeDialog)
    {
        if (WelcomeDialog->objectName().isEmpty())
            WelcomeDialog->setObjectName(QStringLiteral("WelcomeDialog"));
        WelcomeDialog->resize(400, 300);
        EnterMainWinButton = new QPushButton(WelcomeDialog);
        EnterMainWinButton->setObjectName(QStringLiteral("EnterMainWinButton"));
        EnterMainWinButton->setGeometry(QRect(130, 100, 141, 51));

        retranslateUi(WelcomeDialog);
        QObject::connect(EnterMainWinButton, SIGNAL(clicked()), WelcomeDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(WelcomeDialog);
    } // setupUi

    void retranslateUi(QDialog *WelcomeDialog)
    {
        WelcomeDialog->setWindowTitle(QApplication::translate("WelcomeDialog", "\346\254\242\350\277\216\345\205\211\344\270\264", 0));
        EnterMainWinButton->setText(QApplication::translate("WelcomeDialog", "\347\202\271\345\207\273\350\277\233\345\205\245\344\270\273\350\217\234\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class WelcomeDialog: public Ui_WelcomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEDIALOG_H
