/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *create_button;
    QPushButton *get_button;
    QPushButton *update_button;
    QPushButton *delete_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(602, 347);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        create_button = new QPushButton(centralwidget);
        create_button->setObjectName("create_button");

        verticalLayout->addWidget(create_button);

        get_button = new QPushButton(centralwidget);
        get_button->setObjectName("get_button");

        verticalLayout->addWidget(get_button);

        update_button = new QPushButton(centralwidget);
        update_button->setObjectName("update_button");

        verticalLayout->addWidget(update_button);

        delete_button = new QPushButton(centralwidget);
        delete_button->setObjectName("delete_button");

        verticalLayout->addWidget(delete_button);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 602, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        create_button->setText(QCoreApplication::translate("MainWindow", "Create Task", nullptr));
        get_button->setText(QCoreApplication::translate("MainWindow", "Get Task", nullptr));
        update_button->setText(QCoreApplication::translate("MainWindow", "Edit Task", nullptr));
        delete_button->setText(QCoreApplication::translate("MainWindow", "Delete Task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
