/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_list;
    QAction *actionExit;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QRadioButton *mp3;
    QRadioButton *ogg;
    QRadioButton *mp4;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(663, 242);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(663, 242));
        MainWindow->setMaximumSize(QSize(663, 242));
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        actionOpen_list = new QAction(MainWindow);
        actionOpen_list->setObjectName(QStringLiteral("actionOpen_list"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 60, 511, 36));
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 120, 92, 36));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        mp3 = new QRadioButton(centralWidget);
        mp3->setObjectName(QStringLiteral("mp3"));
        mp3->setGeometry(QRect(210, 20, 109, 26));
        mp3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        mp3->setChecked(true);
        ogg = new QRadioButton(centralWidget);
        ogg->setObjectName(QStringLiteral("ogg"));
        ogg->setGeometry(QRect(290, 20, 109, 26));
        ogg->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        mp4 = new QRadioButton(centralWidget);
        mp4->setObjectName(QStringLiteral("mp4"));
        mp4->setGeometry(QRect(370, 20, 109, 26));
        mp4->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 663, 28));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpen->menuAction());
        menuOpen->addAction(actionOpen_list);
        menuOpen->addSeparator();
        menuOpen->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Youtube-dl GUI", Q_NULLPTR));
        actionOpen_list->setText(QApplication::translate("MainWindow", "Open list", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Download", Q_NULLPTR));
        mp3->setText(QApplication::translate("MainWindow", "MP3", Q_NULLPTR));
        ogg->setText(QApplication::translate("MainWindow", "OGG", Q_NULLPTR));
        mp4->setText(QApplication::translate("MainWindow", "MP4", Q_NULLPTR));
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
