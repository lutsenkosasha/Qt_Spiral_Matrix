/********************************************************************************
** Form generated from reading UI file 'Qt_Test_Task.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_TEST_TASK_H
#define UI_QT_TEST_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt_Test_TaskClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_Test_TaskClass)
    {
        if (Qt_Test_TaskClass->objectName().isEmpty())
            Qt_Test_TaskClass->setObjectName(QString::fromUtf8("Qt_Test_TaskClass"));
        Qt_Test_TaskClass->resize(779, 535);
        centralWidget = new QWidget(Qt_Test_TaskClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 120, 171, 61));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 90, 51, 41));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(610, 90, 51, 41));
        lineEdit_2->setLayoutDirection(Qt::LeftToRight);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(180, 270, 411, 151));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 30, 161, 41));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(560, 30, 151, 41));
        Qt_Test_TaskClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt_Test_TaskClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 779, 20));
        Qt_Test_TaskClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_Test_TaskClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Qt_Test_TaskClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qt_Test_TaskClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Qt_Test_TaskClass->setStatusBar(statusBar);

        retranslateUi(Qt_Test_TaskClass);

        QMetaObject::connectSlotsByName(Qt_Test_TaskClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_Test_TaskClass)
    {
        Qt_Test_TaskClass->setWindowTitle(QCoreApplication::translate("Qt_Test_TaskClass", "Qt_Test_Task", nullptr));
        pushButton->setText(QCoreApplication::translate("Qt_Test_TaskClass", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\274\320\260\321\202\321\200\320\270\321\206\321\203", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        lineEdit_3->setText(QCoreApplication::translate("Qt_Test_TaskClass", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\276\320\261\321\206\320\276\320\262", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("Qt_Test_TaskClass", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qt_Test_TaskClass: public Ui_Qt_Test_TaskClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_TEST_TASK_H
