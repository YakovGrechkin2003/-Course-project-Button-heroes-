#include <QDebug>
#include "viewexample.hpp"

viewExample::viewExample()
{
  setRenderHint(QPainter::Antialiasing);

  setCacheMode(QGraphicsView::CacheNone);

  setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


  setWindowTitle("viewExample");

  setFrameStyle(0);
  setSceneRect(0, 0, 800, 800);
  setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
  setFixedSize(850, 600);

  mScene.setItemIndexMethod(QGraphicsScene::NoIndex);


  setScene(&mScene);
  _init_view_elements();
}
//------------------------------------------------------------------------------
void viewExample::_init_view_elements()
{
    mBtnA.coordX = 100;
    mBtnA.coordY = 250;
    mBtnA.setPos(mBtnA.coordX, mBtnA.coordY);
    mBtnA.enableMouseMoving();
    mBtnA.setImage(":/new/prefix1/soldier_a_64.png");
    connect(&mBtnA, &button::btnMouseReleaseEvent,
            this, &viewExample::mbtn_A_clicked);

    mBtnB.coordX = 100;
    mBtnB.coordY = 380;
    mBtnB.setPos(mBtnB.coordX, mBtnB.coordY);
    mBtnB.setImage(":/new/prefix1/soldier_a_64.png");
    connect(&mBtnB, &button::btnMouseReleaseEvent,
            this, &viewExample::mbtn_B_clicked);


    mBtnC.coordX = 100;
    mBtnC.coordY = 510;
    mBtnC.setPos(mBtnC.coordX, mBtnC.coordY);
    mBtnC.setImage(":/new/prefix1/soldier_a_64.png");
    connect(&mBtnC, &button::btnMouseReleaseEvent,
            this, &viewExample::mbtn_C_clicked);

    mScene.addItem(&mBtnA);
    mScene.addItem(&mBtnB);
    mScene.addItem(&mBtnC);

//------------------------------------------------------------------------------

    BtnA1.coordX = 1000;
    BtnA1.coordY = 1050;
    BtnA1.setPos(BtnA1.coordX, BtnA1.coordY);
    BtnA1.enableMouseMoving();
    BtnA1.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnA1, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mA1_clicked);

    BtnA2.coordX = 1050;
    BtnA2.coordY = 1050;
    BtnA2.setPos(BtnA2.coordX, BtnA2.coordY);
    BtnA2.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnA2, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mA2_clicked);


    BtnA3.coordX = 1250;
    BtnA3.coordY = 1250;
    BtnA3.setPos(BtnA3.coordX, BtnA3.coordY);
    BtnA3.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnA3, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mA3_clicked);


    BtnA4.coordX = 1250;
    BtnA4.coordY = 1250;
    BtnA4.setPos(BtnA4.coordX, BtnA4.coordY);
    BtnA4.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnA4, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mA4_clicked);


    mScene.addItem(&BtnA1);
    mScene.addItem(&BtnA2);
    mScene.addItem(&BtnA3);
    mScene.addItem(&BtnA4);

//------------------------------------------------------------------------------

    BtnB1.coordX = 1000;
    BtnB1.coordY = 1050;
    BtnB1.setPos(BtnB1.coordX, BtnB1.coordY);
    BtnB1.enableMouseMoving();
    BtnB1.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnB1, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mB1_clicked);

    BtnB2.coordX = 1050;
    BtnB2.coordY = 1050;
    BtnB2.setPos(BtnB2.coordX, BtnB2.coordY);
    BtnB2.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnB2, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mB2_clicked);


    BtnB3.coordX = 1250;
    BtnB3.coordY = 1250;
    BtnB3.setPos(BtnB3.coordX, BtnB3.coordY);
    BtnB3.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnB3, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mB3_clicked);


    BtnB4.coordX = 1250;
    BtnB4.coordY = 1250;
    BtnB4.setPos(BtnB4.coordX, BtnB4.coordY);
    BtnB4.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnB4, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mB4_clicked);

    mScene.addItem(&BtnB1);
    mScene.addItem(&BtnB2);
    mScene.addItem(&BtnB3);
    mScene.addItem(&BtnB4);

//------------------------------------------------------------------------------

    BtnC1.coordX = 1000;
    BtnC1.coordY = 1050;
    BtnC1.setPos(BtnC1.coordX, BtnC1.coordY);
    BtnC1.enableMouseMoving();
    BtnC1.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnC1, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mC1_clicked);

    BtnC2.coordX = 1050;
    BtnC2.coordY = 1050;
    BtnC2.setPos(BtnC2.coordX, BtnC2.coordY);
    BtnC2.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnC2, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mC2_clicked);


    BtnC3.coordX = 1250;
    BtnC3.coordY = 1250;
    BtnC3.setPos(BtnC3.coordX, BtnC3.coordY);
    BtnC3.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnC3, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mC3_clicked);


    BtnC4.coordX = 1250;
    BtnC4.coordY = 1250;
    BtnC4.setPos(BtnB4.coordX, BtnB4.coordY);
    BtnC4.setImage(":/new/prefix1/bomb_a_64.png");
    connect(&BtnC4, &buttonMove::btnMouseReleaseEvent,
            this, &viewExample::mbtn_mC4_clicked);

    mScene.addItem(&BtnC1);
    mScene.addItem(&BtnC2);
    mScene.addItem(&BtnC3);
    mScene.addItem(&BtnC4);
}
//------------------------------------------------------------------------------
void viewExample::mbtn_A_clicked(Qt::MouseButton aBtn)
{
  BtnA1.coordX = mBtnA.coordX;
  BtnA1.coordY = mBtnA.coordY - 65;
  BtnA1.setPos(BtnA1.coordX, BtnA1.coordY);

  BtnA2.coordX = mBtnA.coordX + 65;
  BtnA2.coordY = mBtnA.coordY;
  BtnA2.setPos(BtnA2.coordX, BtnA2.coordY);

  BtnA3.coordX = mBtnA.coordX;
  BtnA3.coordY = mBtnA.coordY + 65;
  BtnA3.setPos(BtnA3.coordX, BtnA3.coordY);

  BtnA4.coordX = mBtnA.coordX - 65;
  BtnA4.coordY = mBtnA.coordY;
  BtnA4.setPos(BtnA4.coordX, BtnA4.coordY);
}

void viewExample::mbtn_mA1_clicked(Qt::MouseButton aBtn)
{
    mBtnA.coordX = BtnA1.coordX;
    mBtnA.coordY = BtnA1.coordY;
    mBtnA.setPos(BtnA1.coordX, BtnA1.coordY);

    BtnA1.coordX = 1050;
    BtnA1.coordY = 1050;
    BtnA1.setPos(BtnA1.coordX, BtnA1.coordY);

    BtnA2.coordX = 1050;
    BtnA2.coordY = 1050;
    BtnA2.setPos(BtnA2.coordX, BtnA2.coordY);

    BtnA3.coordX = 1050;
    BtnA3.coordY = 1050;
    BtnA3.setPos(BtnA3.coordX, BtnA3.coordY);

    BtnA4.coordX = 1050;
    BtnA4.coordY = 1050;
    BtnA4.setPos(BtnA4.coordX, BtnA4.coordY);
}
void viewExample::mbtn_mA2_clicked(Qt::MouseButton aBtn)
{
    mBtnA.coordX = BtnA2.coordX;
    mBtnA.coordY = BtnA2.coordY;
    mBtnA.setPos(BtnA2.coordX, BtnA2.coordY);

    BtnA1.coordX = 1050;
    BtnA1.coordY = 1050;
    BtnA1.setPos(BtnA1.coordX, BtnA1.coordY);

    BtnA2.coordX = 1050;
    BtnA2.coordY = 1050;
    BtnA2.setPos(BtnA2.coordX, BtnA2.coordY);

    BtnA3.coordX = 1050;
    BtnA3.coordY = 1050;
    BtnA3.setPos(BtnA3.coordX, BtnA3.coordY);

    BtnA4.coordX = 1050;
    BtnA4.coordY = 1050;
    BtnA4.setPos(BtnA4.coordX, BtnA4.coordY);
}
void viewExample::mbtn_mA3_clicked(Qt::MouseButton aBtn)
{
    mBtnA.coordX = BtnA3.coordX;
    mBtnA.coordY = BtnA3.coordY;
    mBtnA.setPos(BtnA3.coordX, BtnA3.coordY);

    BtnA1.coordX = 1050;
    BtnA1.coordY = 1050;
    BtnA1.setPos(BtnA1.coordX, BtnA1.coordY);

    BtnA2.coordX = 1050;
    BtnA2.coordY = 1050;
    BtnA2.setPos(BtnA2.coordX, BtnA2.coordY);

    BtnA3.coordX = 1050;
    BtnA3.coordY = 1050;
    BtnA3.setPos(BtnA3.coordX, BtnA3.coordY);

    BtnA4.coordX = 1050;
    BtnA4.coordY = 1050;
    BtnA4.setPos(BtnA4.coordX, BtnA4.coordY);
}
void viewExample::mbtn_mA4_clicked(Qt::MouseButton aBtn)
{
    mBtnA.coordX = BtnA4.coordX;
    mBtnA.coordY = BtnA4.coordY;
    mBtnA.setPos(BtnA4.coordX, BtnA4.coordY);

    BtnA1.coordX = 1050;
    BtnA1.coordY = 1050;
    BtnA1.setPos(BtnA1.coordX, BtnA1.coordY);

    BtnA2.coordX = 1050;
    BtnA2.coordY = 1050;
    BtnA2.setPos(BtnA2.coordX, BtnA2.coordY);

    BtnA3.coordX = 1050;
    BtnA3.coordY = 1050;
    BtnA3.setPos(BtnA3.coordX, BtnA3.coordY);

    BtnA4.coordX = 1050;
    BtnA4.coordY = 1050;
    BtnA4.setPos(BtnA4.coordX, BtnA4.coordY);
}
//------------------------------------------------------------------------------
void viewExample::mbtn_B_clicked(Qt::MouseButton aBtn)
{
    BtnB1.coordX = mBtnB.coordX;
    BtnB1.coordY = mBtnB.coordY - 65;
    BtnB1.setPos(BtnB1.coordX, BtnB1.coordY);

    BtnB2.coordX = mBtnB.coordX + 65;
    BtnB2.coordY = mBtnB.coordY;
    BtnB2.setPos(BtnB2.coordX, BtnB2.coordY);

    BtnB3.coordX = mBtnB.coordX;
    BtnB3.coordY = mBtnB.coordY + 65;
    BtnB3.setPos(BtnB3.coordX, BtnB3.coordY);

    BtnB4.coordX = mBtnB.coordX - 65;
    BtnB4.coordY = mBtnB.coordY;
    BtnB4.setPos(BtnB4.coordX, BtnB4.coordY);
}

void viewExample::mbtn_mB1_clicked(Qt::MouseButton aBtn)
{
    mBtnB.coordX = BtnB1.coordX;
    mBtnB.coordY = BtnB1.coordY;
    mBtnB.setPos(BtnB1.coordX, BtnB1.coordY);

    BtnB1.coordX = 1050;
    BtnB1.coordY = 1050;
    BtnB1.setPos(BtnB1.coordX, BtnB1.coordY);

    BtnB2.coordX = 1050;
    BtnB2.coordY = 1050;
    BtnB2.setPos(BtnB2.coordX, BtnB2.coordY);

    BtnB3.coordX = 1050;
    BtnB3.coordY = 1050;
    BtnB3.setPos(BtnB3.coordX, BtnB3.coordY);

    BtnB4.coordX = 1050;
    BtnB4.coordY = 1050;
    BtnB4.setPos(BtnB4.coordX, BtnB4.coordY);
}
void viewExample::mbtn_mB2_clicked(Qt::MouseButton aBtn)
{
    mBtnB.coordX = BtnB2.coordX;
    mBtnB.coordY = BtnB2.coordY;
    mBtnB.setPos(BtnB2.coordX, BtnB2.coordY);

    BtnB1.coordX = 1050;
    BtnB1.coordY = 1050;
    BtnB1.setPos(BtnB1.coordX, BtnB1.coordY);

    BtnB2.coordX = 1050;
    BtnB2.coordY = 1050;
    BtnB2.setPos(BtnB2.coordX, BtnB2.coordY);

    BtnB3.coordX = 1050;
    BtnB3.coordY = 1050;
    BtnB3.setPos(BtnB3.coordX, BtnB3.coordY);

    BtnB4.coordX = 1050;
    BtnB4.coordY = 1050;
    BtnB4.setPos(BtnB4.coordX, BtnB4.coordY);
}
void viewExample::mbtn_mB3_clicked(Qt::MouseButton aBtn)
{
    mBtnB.coordX = BtnB3.coordX;
    mBtnB.coordY = BtnB3.coordY;
    mBtnB.setPos(BtnB3.coordX, BtnB3.coordY);

    BtnB1.coordX = 1050;
    BtnB1.coordY = 1050;
    BtnB1.setPos(BtnB1.coordX, BtnB1.coordY);

    BtnB2.coordX = 1050;
    BtnB2.coordY = 1050;
    BtnB2.setPos(BtnB2.coordX, BtnB2.coordY);

    BtnB3.coordX = 1050;
    BtnB3.coordY = 1050;
    BtnB3.setPos(BtnB3.coordX, BtnB3.coordY);

    BtnB4.coordX = 1050;
    BtnB4.coordY = 1050;
    BtnB4.setPos(BtnB4.coordX, BtnB4.coordY);
}
void viewExample::mbtn_mB4_clicked(Qt::MouseButton aBtn)
{
    mBtnB.coordX = BtnB4.coordX;
    mBtnB.coordY = BtnB4.coordY;
    mBtnB.setPos(BtnB4.coordX, BtnB4.coordY);

    BtnB1.coordX = 1050;
    BtnB1.coordY = 1050;
    BtnB1.setPos(BtnB1.coordX, BtnB1.coordY);

    BtnB2.coordX = 1050;
    BtnB2.coordY = 1050;
    BtnB2.setPos(BtnB2.coordX, BtnB2.coordY);

    BtnB3.coordX = 1050;
    BtnB3.coordY = 1050;
    BtnB3.setPos(BtnB3.coordX, BtnB3.coordY);

    BtnB4.coordX = 1050;
    BtnB4.coordY = 1050;
    BtnB4.setPos(BtnB4.coordX, BtnB4.coordY);
}
//------------------------------------------------------------------------------
void viewExample::mbtn_C_clicked(Qt::MouseButton aBtn)
{
    BtnC1.coordX = mBtnC.coordX;
    BtnC1.coordY = mBtnC.coordY - 65;
    BtnC1.setPos(BtnC1.coordX, BtnC1.coordY);

    BtnC2.coordX = mBtnC.coordX + 65;
    BtnC2.coordY = mBtnC.coordY;
    BtnC2.setPos(BtnC2.coordX, BtnC2.coordY);

    BtnC3.coordX = mBtnC.coordX;
    BtnC3.coordY = mBtnC.coordY + 65;
    BtnC3.setPos(BtnC3.coordX, BtnC3.coordY);

    BtnC4.coordX = mBtnC.coordX - 65;
    BtnC4.coordY = mBtnC.coordY;
    BtnC4.setPos(BtnC4.coordX, BtnC4.coordY);
}

void viewExample::mbtn_mC1_clicked(Qt::MouseButton aBtn)
{
    mBtnC.coordX = BtnC1.coordX;
    mBtnC.coordY = BtnC1.coordY;
    mBtnC.setPos(BtnC1.coordX, BtnC1.coordY);

    BtnC1.coordX = 1050;
    BtnC1.coordY = 1050;
    BtnC1.setPos(BtnC1.coordX, BtnC1.coordY);

    BtnC2.coordX = 1050;
    BtnC2.coordY = 1050;
    BtnC2.setPos(BtnC2.coordX, BtnC2.coordY);

    BtnC3.coordX = 1050;
    BtnC3.coordY = 1050;
    BtnC3.setPos(BtnC3.coordX, BtnC3.coordY);

    BtnC4.coordX = 1050;
    BtnC4.coordY = 1050;
    BtnC4.setPos(BtnC4.coordX, BtnC4.coordY);
}
void viewExample::mbtn_mC2_clicked(Qt::MouseButton aBtn)
{
    mBtnC.coordX = BtnC2.coordX;
    mBtnC.coordY = BtnC2.coordY;
    mBtnC.setPos(BtnC2.coordX, BtnC2.coordY);

    BtnC1.coordX = 1050;
    BtnC1.coordY = 1050;
    BtnC1.setPos(BtnC1.coordX, BtnC1.coordY);

    BtnC2.coordX = 1050;
    BtnC2.coordY = 1050;
    BtnC2.setPos(BtnC2.coordX, BtnC2.coordY);

    BtnC3.coordX = 1050;
    BtnC3.coordY = 1050;
    BtnC3.setPos(BtnC3.coordX, BtnC3.coordY);

    BtnC4.coordX = 1050;
    BtnC4.coordY = 1050;
    BtnC4.setPos(BtnC4.coordX, BtnC4.coordY);
}
void viewExample::mbtn_mC3_clicked(Qt::MouseButton aBtn)
{
    mBtnC.coordX = BtnC3.coordX;
    mBtnC.coordY = BtnC3.coordY;
    mBtnC.setPos(BtnC3.coordX, BtnC3.coordY);

    BtnC1.coordX = 1050;
    BtnC1.coordY = 1050;
    BtnC1.setPos(BtnC1.coordX, BtnC1.coordY);

    BtnC2.coordX = 1050;
    BtnC2.coordY = 1050;
    BtnC2.setPos(BtnC2.coordX, BtnC2.coordY);

    BtnC3.coordX = 1050;
    BtnC3.coordY = 1050;
    BtnC3.setPos(BtnC3.coordX, BtnC3.coordY);

    BtnC4.coordX = 1050;
    BtnC4.coordY = 1050;
    BtnC4.setPos(BtnC4.coordX, BtnC4.coordY);
}
void viewExample::mbtn_mC4_clicked(Qt::MouseButton aBtn)
{
    mBtnC.coordX = BtnC4.coordX;
    mBtnC.coordY = BtnC4.coordY;
    mBtnC.setPos(BtnC4.coordX, BtnC4.coordY);

    BtnC1.coordX = 1050;
    BtnC1.coordY = 1050;
    BtnC1.setPos(BtnC1.coordX, BtnC1.coordY);

    BtnC2.coordX = 1050;
    BtnC2.coordY = 1050;
    BtnC2.setPos(BtnC2.coordX, BtnC2.coordY);

    BtnC3.coordX = 1050;
    BtnC3.coordY = 1050;
    BtnC3.setPos(BtnC3.coordX, BtnC3.coordY);

    BtnC4.coordX = 1050;
    BtnC4.coordY = 1050;
    BtnC4.setPos(BtnC4.coordX, BtnC4.coordY);
}
