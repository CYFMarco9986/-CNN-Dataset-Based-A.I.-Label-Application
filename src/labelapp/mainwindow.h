#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QtGui>
#include<string>
#include<vector>
#include<iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class QPainter;
class QImage;

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_actionQuit_triggered();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_actionrectangle_triggered();

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    Ui::mainwindow *ui;

    QGraphicsItem *item;
    QGraphicsScene *scene;
    QPainter *mpainter;
    QImage *mimage;
    QPoint pBegin;
    QPoint pEnd;
    bool mEnabled;

};
#endif // MAINWINDOW_H
