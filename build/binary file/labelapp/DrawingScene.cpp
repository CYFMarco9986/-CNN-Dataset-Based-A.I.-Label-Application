#include "drawingscene.h"

#include <string>
#include <QDebug>
#include <QGraphicsEllipseItem>
#include <QGraphicsPathItem>
#include <QPainter>
#include <QPainterPath>
#include <QMessageBox>

DrawingScene::DrawingScene(QObject *parent) : QGraphicsScene(parent)
{
    QPen linePen(Qt::red);
    this->setBackgroundBrush(Qt::gray);
    linePen.setBrush(Qt::red);
    linePen.setWidth(2);
}

void DrawingScene::newShape()
{
    this->m_coords.clear();
}

void DrawingScene::setMaxPoints(int points)
{
    this->maxPoints = points;
}

void DrawingScene::setImageLoaded(bool loaded)
{
    this->imageLoaded = loaded;
}

void DrawingScene::setCurrentImage(QPixmap image)
{
    this->currentImage = image;
}

void DrawingScene::setCurrentClass(QString className)
{
    this->currentClass = className;
}

bool DrawingScene::getImageLoaded()
{
    return this->imageLoaded;
}

int DrawingScene::pointExists(QGraphicsSceneMouseEvent *mouseEvent)
{
    if(m_coords.size()>1)
    {
        for(unsigned int loopCount =0; loopCount < m_coords.size(); loopCount ++)
        {
            if(mouseEvent-> scenePos().x()-5<= m_coords.at(loopCount).x()
            && mouseEvent-> scenePos().x() +5 >= m_coords.at(loopCount).x()
            && mouseEvent-> scenePos().y()-5 <= m_coords.at(loopCount).y()
            && mouseEvent->scenePos().y()+5 >= m_coords.at(loopCount).y())
            {
                return loopCount;
            }
        }
    }
    return -1;
}

void DrawingScene::redrawPoints()
{
    m_points.clear();
    m_lines.clear();
    this->clear();
    this->setSceneRect(0,0,currentImage.width(), currentImage.height());
    this->addPixmap(currentImage);

    for(unsigned int loopCount =0;loopCount<m_coords.size();loopCount ++)
    {
        QGraphicsEllipseItem * ellipse = this->addEllipse(m_coords.at(loopCount).x() - radius, m_coords.at(loopCount).y() - radius,
                                                          radius*2, radius*2);
        ellipse->setFlag(QGraphicsItem::ItemIsMovable);
        ellipse->setBrush(Qt::white);
        ellipse->setCursor(Qt::SizeAllCursor);
        m_points.push_back(ellipse);
        if(loopCount == 0)
        {
            QGraphicsTextItem *text = this->addText(currentClass);
            text -> setPos(m_coords.at(loopCount).x()-20, m_coords.at(loopCount).y()-20);
            text -> setDefaultTextColor(Qt::red);
            this -> addItem(text);
        }
        if(loopCount > 0)
        {
            qDebug();
            QGraphicsLineItem *line = new QGraphicsLineItem(m_coords.at(loopCount-1).x(),m_coords.at(loopCount-1).y(),
                                                            m_coords.at(loopCount).x(),m_coords.at(loopCount).y());
            line -> setPen(linePen);
            this -> addItem(line);
            m_lines.push_back(line);
        }
    }
}

void DrawingScene::drawPoint(QPointF point)
{
    QGraphicsEllipseItem * ellipse =  this -> addEllipse(point.x() - radius,point.y() -radius, radius*2,radius*2);
    ellipse -> setFlag(QGraphicsItem::ItemIsMovable);
    ellipse -> setBrush(Qt::white);
    ellipse -> setCursor(Qt::SizeAllCursor);
    m_points.push_back(ellipse);
    m_coords.push_back(point);
    if(m_coords.size() == 1)
    {
        QGraphicsTextItem *text = this -> addText(currentClass);
        text -> setPos(point.x(), point.y()-20);
        text -> setDefaultTextColor(Qt::red);
        this -> addItem(text);
    }
    else
    {
        QGraphicsLineItem *line = new QGraphicsLineItem(m_coords.at(m_coords.size()-2).x(),m_coords.at(m_coords.size()-2).y(),
                                                                    m_coords.at(m_coords.size()-1).x(),m_coords.at(m_coords.size()-1).y());
        line -> setPen(linePen);
        this -> addItem(line);
        m_lines.push_back(line);
    }
}

void DrawingScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
    QGraphicsScene::mouseDoubleClickEvent(mouseEvent);
}

void DrawingScene::mouseMoveEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
    QGraphicsScene::mouseMoveEvent(mouseEvent);
}

void DrawingScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    selectedPoint = pointExists(mouseEvent);

    if(imageLoaded)
    {
        if(currentClass!="")
        {
            if(selectedPoint == -1)
            {
                if(m_coords.size() <= maxPoints -1)
                {
                    drawPoint(mouseEvent -> scenePos());
                }
                else
                {
                    QMessageBox::information(nullptr, tr("information"), "This maximum number of points is" + QString::number(maxPoints));
                }

            }
            else
            {
                m_points.at(selectedPoint) -> setCursor(Qt::ClosedHandCursor);
            }

        }
        else
        {
            QMessageBox::information(nullptr, tr("Information"), "You must selected a Class First");
        }
    }
    else
    {
        QMessageBox::information(nullptr, tr("Information"), "You must select an Image first");
    }
    QGraphicsScene::mousePressEvent(mouseEvent);
}

void DrawingScene::mouseReleaseEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
    if(selectedPoint != -1)
    {
        m_points.at(selectedPoint)->setCursor(Qt::SizeAllCursor);
        m_coords.at(selectedPoint) = mouseEvent->scenePos();
        m_points.at(selectedPoint) = this->addEllipse(mouseEvent->scenePos().x() - radius, mouseEvent->scenePos().y() - radius, radius*2, radius*2);
        redrawPoints();
    }
    QGraphicsScene::mouseReleaseEvent(mouseEvent);
}







