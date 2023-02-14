#include "mainwindow.h"
#include "drawingscene.h"
#include "ui_mainwindow.h"

#include <string>
#include <QHeaderView>
#include <QTableView>
#include <iostream>
#include <algorithm>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDateTime>
#include <QInputDialog>
#include <QPixmap>
#include <QGraphicsScene>
#include <QDebug>
#include <QPainter>
#include <QMouseEvent>
#include <iterator>

using namespace std;

QString classFileName = "";
bool imageSortCol1 = false;
bool imageSortCol2 = false;

void TableFunc(QTableWidget * thisTable, std::vector<std::pair<QString, QString>>contents, bool hasSecondCol)
{
    thisTable -> clearContents();
    thisTable -> setRowCount(0);

    for (unsigned int loopCount = 0; loopCount < contents.size(); loopCount++)
    {
        thisTable -> insertRow(thisTable -> rowCount());
        QTableWidgetItem * firstItem = new QTableWidgetItem(contents[loopCount].first);
        firstItem -> setFlags(firstItem -> flags() ^Qt::ItemIsEditable);
        thisTable -> setItem(thisTable -> rowCount() -1, 0, firstItem);
        if(hasSecondCol)
        {
            QTableWidgetItem * secondItem = new QTableWidgetItem(contents[loopCount].second);
            secondItem -> setFlags(secondItem -> flags() ^Qt::ItemIsEditable);
            thisTable -> setItem(thisTable -> rowCount() -1, 1, secondItem);
        }
    }
}

//Sorting function
void bubbleSort(std::vector<std::pair<QString, QString>>& contents, bool ascending, int column)
{
    typedef std::vector<std::string>::size_type size_type;
    for(size_type i = 1; i < contents.size(); ++i)
    {
        for(size_type j = 0; j < (contents.size()-1); ++j)
        {
            if(ascending)
            {
                QString compareFirst ="";
                QString compareSecond ="";
                if(column == 0)
                {
                    compareFirst = contents[j].first;
                    compareSecond = contents[j+1].first;
                }
                else
                {
                    compareFirst = contents[j].second;
                    compareSecond = contents[j+1].second;
                }
                if(compareFirst > compareSecond)
                {
                    std::pair<QString, QString>temp = {contents[j].first, contents[j].second};
                    contents[j].first = contents[j+1].first;
                    contents[j].second = contents[j+1].second;
                    contents[j+1].first = temp.first;
                    contents[j+1].second = temp.second;
                }
            }
            else
            {
                QString compareFirst = "";
                QString compareSecond = "";
                if(column == 0)
                {
                    compareFirst = contents[j].first;
                    compareSecond = contents[j+1].first;
                }
                else
                {
                    compareFirst = contents[j].second;
                    compareSecond = contents[j+1].second;
                }
                if(compareFirst < compareSecond)
                {
                    std::pair<QString, QString>temp = {contents[j].first, contents[j].second};
                    contents[j].first = contents[j+1].first;
                    contents[j].second = contents[j+1].second;
                    contents[j+1].first = temp.first;
                    contents[j+1].second = temp.second;
                }
            }
        }
    }
}

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    ui -> setupUi(this);
    ui -> graphicsView -> setScene(mainScene);

    mimage = new QImage(QApplication::desktop()->size(),
                        QImage::Format_ARGB32_Premultiplied);
}

mainwindow::~mainwindow()
{
    delete ui;
    delete mimage;
}

//Loading image and displaying file name
void mainwindow::on_pushButton_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", " Image(* .png * .jpg * .jpeg)");
    QTextStream in(&fileName);
    ui->textBrowser_2->setText(in.readLine());
    if (QString::compare(fileName, QString()) !=0)
    {
        QImage image;
        bool valid = image.load(fileName);
        item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
        scene = new QGraphicsScene(this);
        ui -> graphicsView -> setScene(scene);
        scene->addItem(item);

        if(valid)
        {
            image = image.scaledToWidth(ui->graphicsView->width(), Qt::SmoothTransformation);
            ui->graphicsView->setScene(scene);
        }
        else
        {
            //Error handling
            if(fileName.isEmpty())
                return;
        }
    }
}

//Adding class txt file
void mainwindow::on_pushButton_2_clicked()
{
    if (classFileName.isEmpty())
    {
        QMessageBox::information(this, tr("Unable to open Class file"),"you must load a class file first");
        return;
    }

    bool io;

    QString newClassName = QInputDialog::getText(this, tr("QInputDialog::getText()"), tr("New Class Name:"), QLineEdit::Normal, QDir::home().dirName(),
                                                 &io);

    if(io && !newClassName.isEmpty())
    {
        QFile classFile(classFileName);
        if(!classFile.open(QIODevice::Append | QIODevice::Text))
        {
            QMessageBox::information(this, tr("Unable to add class"),
                                     classFile.errorString());
            return;
        }

        else
        {
            QTextStream outStream(&classFile);
            outStream << "\n" << newClassName;
            classFile.close();
            ui -> tableWidget ->insertRow(ui -> tableWidget -> rowCount());
            QTableWidgetItem *item = new QTableWidgetItem(newClassName);
            item -> setFlags(item -> flags() ^ Qt::ItemIsEditable);
            ui -> tableWidget -> setItem(ui -> tableWidget -> rowCount()-1, 0, item);
        }
    }
}

//Load Class
void mainwindow::on_pushButton_7_clicked()
{
    classFileName = QFileDialog::getOpenFileName(this, tr("Open Class File"),"",tr("Class Files(*.names*)"));

    if(classFileName.isEmpty())
        return;
    else
    {
        QFile classFile(classFileName);
        if(!classFile.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(this, tr("Unable to load file"), classFile.errorString());
            return;
        }

        QTextStream in(&classFile);

        ui -> tableWidget -> clearContents();
        ui -> tableWidget -> setRowCount(0);
            std::vector<std::pair<QString, QString>>contents;

        while(!in.atEnd())
        {
            QString line = in.readLine();
            contents.push_back({line,""});
        }
        classFile.close();

            TableFunc(ui -> tableWidget, contents, false);

        ui -> pushButton_2 -> setEnabled(true);
        ui -> pushButton_8 -> setEnabled(true);
    }
}

//Delete Class
void mainwindow::on_pushButton_8_clicked()
{
    if (classFileName.isEmpty())
    {
        QMessageBox::information(this, tr("Unable to open Class file"),"you must load a class file first");
        return;
    }

    QFile classFile(classFileName);
    if (!classFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QMessageBox::information(this,tr("Unable to add class"),classFile.errorString());
        return;
    }

    else
    {
        QModelIndex currentIndex = ui -> tableWidget -> currentIndex();
        QString outputString;
        QTextStream textStream(&classFile);
        while(!textStream.atEnd())
        {
            QString line = textStream.readLine();
            if(!line.contains(ui -> tableWidget -> item(currentIndex.row(), 0)->text()))
            {
                outputString.append(line + "\n");
            }

            else
            {
                outputString.append("\n");
            }
        }
        classFile.resize(0);
        textStream << outputString;
        classFile.close();
    }
    int row = ui -> tableWidget -> currentRow();
    ui -> tableWidget -> removeRow(row);
}

//Bbox
void mainwindow::on_pushButton_3_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "All Files(*.*);;Text Files(*.txt*)");
    QTextStream in(&fileName);
    ui->textBrowser_5->setText(in.readAll());
}

//Sorting
void mainwindow::on_pushButton_4_clicked()
{

}

//Square
void mainwindow::on_actionsquare_triggered()
{
    mainScene -> newShape();
    mainScene -> setMaxPoints(4);
}

//Triangle
void mainwindow::on_actiontriangle_triggered()
{
    mainScene -> newShape();
    mainScene -> setMaxPoints(3);
}

//Trapezium
void mainwindow::on_actiontrapezium_triggered()
{
    mainScene -> newShape();
    mainScene -> setMaxPoints(4);
}

//
void mainwindow::on_actionpolygon_triggered()
{
    mainScene -> newShape();
    mainScene -> setMaxPoints(8);
}

void mainwindow::on_tableWidget_cellClicked(int row, int column)
{
    mainScene->setCurrentClass(ui -> tableWidget -> item(row, 0) -> text());
}


void mainwindow::on_actionQuit_triggered()
{
    QApplication::quit();
}

void mainwindow::on_pushButton_13_clicked()
{
    QMessageBox::information(this,tr("Information"), "This functon has yet not be done");
}

void mainwindow::on_pushButton_14_clicked()
{
    QMessageBox::information(this,tr("Information"), "This functon has yet not be done");
}

void mainwindow::on_pushButton_16_clicked()
{
    QMessageBox::information(this,tr("Information"), "This functon has yet not be done");
}

void mainwindow::on_pushButton_15_clicked()
{
    QMessageBox::information(this,tr("Information"), "This functon has yet not be done");
}
