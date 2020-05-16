#include "buttonmove.hpp"
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QApplication>
#include <QGraphicsScene>

#include <QDebug>

buttonMove::buttonMove()
{
  setAcceptHoverEvents(true);
  setAcceptedMouseButtons(Qt::LeftButton);
}
//------------------------------------------------------------------------------
QRectF buttonMove::boundingRect() const
{
  return QRectF(0, 0, mWidth, mHeigth);
}
//------------------------------------------------------------------------------
void buttonMove::paint(QPainter *painter,
                   const QStyleOptionGraphicsItem */*option*/,
                   QWidget */*widget*/)
{
  if(mHover)
    painter->setPen(QColor(255, 0, 0));
    //painter->setBrush(QColor(255, 0, 0));

  QList<QGraphicsItem*> l = scene()->items();
  foreach(QGraphicsItem *item, l)
  {
    if(item == this)
      continue;

    if(collidesWithItem(item))
    {
      painter->setBrush(QBrush(Qt::green));
      item->update();
    }
  }

  painter->drawPixmap(0,0, mWidth, mHeigth, mPixMap);
  painter->drawRoundedRect(0, 0, mWidth, mHeigth, 7, 7);
}
//------------------------------------------------------------------------------
void buttonMove::enableMouseMoving()
{
  mIsMovable = true;
}
//------------------------------------------------------------------------------
void buttonMove::disableMouseMoving()
{
  mIsMovable = false;
}
//------------------------------------------------------------------------------
void buttonMove::setGeometry(int aWidth, int aHeight)
{
  mWidth  = aWidth;
  mHeigth = aHeight;
}
//------------------------------------------------------------------------------
void buttonMove::setImage(QString aPath)
{
  mPixMap.load(aPath);
  mWidth  = mPixMap.width();
  mHeigth = mPixMap.height();
}
//------------------------------------------------------------------------------
void buttonMove::hoverEnterEvent(QGraphicsSceneHoverEvent*)
{
  //qWarning() << "Enter";
  mHover = true;
  QGraphicsItem::update();
}
//------------------------------------------------------------------------------
void buttonMove::hoverLeaveEvent(QGraphicsSceneHoverEvent*)
{
  //qWarning() << "Leave";
  mHover = false;
  QGraphicsItem::update();
  this->setPos(coordX, coordY); //
}
//------------------------------------------------------------------------------
void buttonMove::mousePressEvent(QGraphicsSceneMouseEvent *aEvent)
{
  mStartMovePos = aEvent->pos();
  mIsMoving = false;
}
//------------------------------------------------------------------------------
void buttonMove::mouseMoveEvent(QGraphicsSceneMouseEvent *aEvent)
{
  if(mIsMovable)
  {
    int distance = ((aEvent->pos() - mStartMovePos)).manhattanLength();
    if(distance > QApplication::startDragDistance())
    {
      QPointF np = mapToScene(aEvent->pos() - mStartMovePos);

      if( (np.x() < 0) || (np.y() < 0) )
        return;
      if( (np.x() > 800) || (np.y() > 800) )
        return;

      mIsMoving = true;
      this->setPos(np);
    }
  }
}
//------------------------------------------------------------------------------
void buttonMove::mouseReleaseEvent(QGraphicsSceneMouseEvent *apEvent)
{
  if(!mIsMoving)
    emit btnMouseReleaseEvent(apEvent->button());
}
