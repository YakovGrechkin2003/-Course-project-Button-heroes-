#include <QObject>
#include <QGraphicsItem>
#include <QPointF>
#include <QPixmap>

class buttonMove : public QObject, public QGraphicsItem
{
  Q_OBJECT
public:
  buttonMove();

  QRectF boundingRect() const override;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

  void mousePressEvent(QGraphicsSceneMouseEvent *)  override;
  void mouseMoveEvent(QGraphicsSceneMouseEvent *)   override;
  void mouseReleaseEvent(QGraphicsSceneMouseEvent *)override;

  void hoverEnterEvent(QGraphicsSceneHoverEvent*)   override;
  void hoverLeaveEvent(QGraphicsSceneHoverEvent*)   override;

  void enableMouseMoving();
  void disableMouseMoving();

  void setGeometry(int, int);
  void setImage(QString);

signals:
  void btnMouseReleaseEvent(Qt::MouseButton);

private:
  int mWidth{0};
  int mHeigth{0};

  bool mIsMovable{true};
  bool mIsMoving{false};
  bool mHover{false};

public:

  int coordX{0};
  int coordY{0};

  QPixmap mPixMap;

  QPointF mStartMovePos;
};
