#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include<algorithm>
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QPainter>
#include<QMouseEvent>
using namespace std;

int main()
{
    return 0;
}

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    mimage = new QImage(QApplication::desktop()->size(),
                        QImage::Format_ARGB32_Premultiplied);
    mpainter = new QPainter(mimage);
}

mainwindow::~mainwindow()
{
    delete ui;
    delete mimage;
    delete mpainter;
}

void mainwindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    event->accept();
}

void mainwindow::mousePressEvent(QMouseEvent *event)
{
    mEnabled = true;
    pBegin = event->pos();
    event->accept();
}

void mainwindow::mouseMoveEvent(QMouseEvent *event)
{
    if(!mEnabled){
        event->accept();
        return;
    }
    QPoint pBegin;
    pBegin.setX(0);
    pBegin.setY(0);

    QPoint pEnd;
    pEnd.setX(0);
    pEnd.setY(0);

    QPen pen(Qt::black);
    pEnd = event->pos();
    mpainter -> drawLine(pBegin, pEnd);
    pBegin= pEnd;
    update();
    event->accept();

}

void mainwindow::mouseReleaseEvent(QMouseEvent *event)
{
    mEnabled = false;
    event->accept();
}



void mainwindow::on_pushButton_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", " Image(* .png * .jpg * .jpeg)");
    QTextStream in(&filename);
    ui->textBrowser_2->setText(in.readLine());
    if (QString::compare(filename, QString()) !=0)
    {
        QImage image;
        bool valid = image.load(filename);
        item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
        scene = new QGraphicsScene(this);
        scene->addItem(item);

        if(valid)
        {
            image = image.scaledToWidth(ui->show_image->width(), Qt::SmoothTransformation);
            ui->show_image->setScene(scene);
            //ui->show_image->setPixmap(QPixmap::fromImage(image));
        }
        else
        {
            //Error handling
        }
    }
}

void mainwindow::on_pushButton_2_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "All Files(*.*);;Text Files(*.txt*)");
    QTextStream in(&filename);
    ui->textBrowser_3->setText(in.readAll());

}

void mainwindow::on_actionQuit_triggered()
{
    QApplication::quit();
}

void mainwindow::on_pushButton_3_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "All Files(*.*);;Text Files(*.txt*)");
    QTextStream in(&filename);
    ui->textBrowser_5->setText(in.readAll());
}

void mainwindow::on_pushButton_4_clicked()
{

}

void mainwindow::on_actionrectangle_triggered()
{
    QPainter painter(this);
    QPen pen;
    pen.setColor(Qt::black);
    painter.drawRect(QRect(80, 120, 200, 100));
    ui->show_image->setDragMode(QGraphicsView::ScrollHandDrag);
}
