#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "drawingscene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class QPainter;
class QImage;

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();
    DrawingScene * mainScene = new DrawingScene();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_actionQuit_triggered();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

    void on_actionsquare_triggered();

    void on_actiontriangle_triggered();

    void on_actiontrapezium_triggered();

    void on_actionpolygon_triggered();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_15_clicked();

protected:

private:
    Ui::mainwindow *ui;

    QGraphicsItem *item;
    QGraphicsScene *scene;
    QImage *mimage;
    QPoint pBegin;
    QPoint pEnd;
    bool mEnabled;

};
#endif // MAINWINDOW_H
