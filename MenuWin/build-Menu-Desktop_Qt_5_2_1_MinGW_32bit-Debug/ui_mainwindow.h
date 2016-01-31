/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_N;
    QAction *actionOpen_O;
    QAction *actionClose_C;
    QAction *actionExit_E;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/File/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/File/u=1962756420,4220601634&fm=21&gp=0.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actionNew_N->setIcon(icon);
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QStringLiteral("actionOpen_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/File/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_O->setIcon(icon1);
        actionClose_C = new QAction(MainWindow);
        actionClose_C->setObjectName(QStringLiteral("actionClose_C"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/File/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_C->setIcon(icon2);
        actionExit_E = new QAction(MainWindow);
        actionExit_E->setObjectName(QStringLiteral("actionExit_E"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actionNew_N);
        menu->addAction(actionOpen_O);
        menu->addAction(actionClose_C);
        menu->addSeparator();
        menu->addAction(actionExit_E);
        mainToolBar->addAction(actionNew_N);
        mainToolBar->addAction(actionOpen_O);
        mainToolBar->addAction(actionClose_C);

        retranslateUi(MainWindow);
        QObject::connect(actionNew_N, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew_N->setText(QApplication::translate("MainWindow", "New(&N)", 0));
#ifndef QT_NO_TOOLTIP
        actionNew_N->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\346\226\260\345\273\272</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionNew_N->setShortcut(QApplication::translate("MainWindow", "Alt+N", 0));
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open(&O)", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen_O->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\346\211\223\345\274\200</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionOpen_O->setShortcut(QApplication::translate("MainWindow", "Alt+O", 0));
        actionClose_C->setText(QApplication::translate("MainWindow", "Close(&C)", 0));
#ifndef QT_NO_TOOLTIP
        actionClose_C->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\205\263\351\227\255</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionClose_C->setShortcut(QApplication::translate("MainWindow", "Alt+C", 0));
        actionExit_E->setText(QApplication::translate("MainWindow", "Exit(&E)", 0));
#ifndef QT_NO_TOOLTIP
        actionExit_E->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\351\200\200\345\207\272</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionExit_E->setShortcut(QApplication::translate("MainWindow", "Alt+E", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", 0));
        menu_4->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267", 0));
        menu_5->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
