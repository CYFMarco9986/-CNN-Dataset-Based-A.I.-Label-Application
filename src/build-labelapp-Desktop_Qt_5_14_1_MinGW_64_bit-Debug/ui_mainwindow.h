/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "customview.h"

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QAction *actionQuit;
    QAction *actionrectangle;
    QAction *actionsquare;
    QAction *actiontriangle;
    QAction *actiontrapezium;
    QAction *actionpolygon;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_3;
    QTextBrowser *textBrowser_5;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    CustomView *show_image;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuDrawing;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(1746, 866);
        actionQuit = new QAction(mainwindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionrectangle = new QAction(mainwindow);
        actionrectangle->setObjectName(QString::fromUtf8("actionrectangle"));
        actionsquare = new QAction(mainwindow);
        actionsquare->setObjectName(QString::fromUtf8("actionsquare"));
        actiontriangle = new QAction(mainwindow);
        actiontriangle->setObjectName(QString::fromUtf8("actiontriangle"));
        actiontrapezium = new QAction(mainwindow);
        actiontrapezium->setObjectName(QString::fromUtf8("actiontrapezium"));
        actionpolygon = new QAction(mainwindow);
        actionpolygon->setObjectName(QString::fromUtf8("actionpolygon"));
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 60, 101, 31));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 60, 331, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 20, 101, 31));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 130, 441, 161));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(30, 400, 441, 161));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(30, 350, 331, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 350, 101, 31));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 310, 101, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 630, 101, 31));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(30, 590, 101, 31));
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(30, 630, 331, 31));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(360, 770, 111, 41));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(50, 690, 111, 41));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(330, 690, 111, 41));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(190, 690, 111, 41));
        show_image = new CustomView(centralwidget);
        show_image->setObjectName(QString::fromUtf8("show_image"));
        show_image->setGeometry(QRect(490, 20, 1241, 791));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 100, 93, 28));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 100, 93, 28));
        mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1746, 26));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuDrawing = new QMenu(menubar);
        menuDrawing->setObjectName(QString::fromUtf8("menuDrawing"));
        mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainwindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuDrawing->menuAction());
        menuMenu->addAction(actionQuit);
        menuDrawing->addAction(actionrectangle);
        menuDrawing->addAction(actionsquare);
        menuDrawing->addAction(actiontriangle);
        menuDrawing->addAction(actiontrapezium);
        menuDrawing->addAction(actionpolygon);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("mainwindow", "exit", nullptr));
        actionrectangle->setText(QCoreApplication::translate("mainwindow", "rectangle", nullptr));
        actionsquare->setText(QCoreApplication::translate("mainwindow", "square", nullptr));
        actiontriangle->setText(QCoreApplication::translate("mainwindow", "triangle", nullptr));
        actiontrapezium->setText(QCoreApplication::translate("mainwindow", "trapezium", nullptr));
        actionpolygon->setText(QCoreApplication::translate("mainwindow", "polygon", nullptr));
        pushButton->setText(QCoreApplication::translate("mainwindow", "Browse", nullptr));
        textEdit->setHtml(QCoreApplication::translate("mainwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">image:</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainwindow", "Browse", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("mainwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Class:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mainwindow", "Browse", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("mainwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Bbox:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        pushButton_13->setText(QCoreApplication::translate("mainwindow", "Crop & Save", nullptr));
        pushButton_14->setText(QCoreApplication::translate("mainwindow", "Save as text", nullptr));
        pushButton_15->setText(QCoreApplication::translate("mainwindow", "Save as XML", nullptr));
        pushButton_16->setText(QCoreApplication::translate("mainwindow", "Save as JSON", nullptr));
        show_image->setFont(QString());
        pushButton_4->setText(QCoreApplication::translate("mainwindow", "Name", nullptr));
        pushButton_5->setText(QCoreApplication::translate("mainwindow", "Date", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("mainwindow", "File", nullptr));
        menuDrawing->setTitle(QCoreApplication::translate("mainwindow", "Drawing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
