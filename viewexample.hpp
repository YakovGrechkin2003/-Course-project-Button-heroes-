#ifndef VIEWEXAMPLE_HPP
#define VIEWEXAMPLE_HPP

#include <QGraphicsView>
#include <QGraphicsScene>

#include "button.hpp"
#include "buttonmove.hpp"


class viewExample : public QGraphicsView
{
public:
  viewExample();

private:
  void _init_view_elements();

private slots:
  void mbtn_A_clicked(Qt::MouseButton);
  void mbtn_B_clicked(Qt::MouseButton);
  void mbtn_C_clicked(Qt::MouseButton);

  void mbtn_mA1_clicked(Qt::MouseButton);
  void mbtn_mA2_clicked(Qt::MouseButton);
  void mbtn_mA3_clicked(Qt::MouseButton);
  void mbtn_mA4_clicked(Qt::MouseButton);

  void mbtn_mB1_clicked(Qt::MouseButton);
  void mbtn_mB2_clicked(Qt::MouseButton);
  void mbtn_mB3_clicked(Qt::MouseButton);
  void mbtn_mB4_clicked(Qt::MouseButton);

  void mbtn_mC1_clicked(Qt::MouseButton);
  void mbtn_mC2_clicked(Qt::MouseButton);
  void mbtn_mC3_clicked(Qt::MouseButton);
  void mbtn_mC4_clicked(Qt::MouseButton);

private:
  button mBtnA;
  button mBtnB;
  button mBtnC;

  buttonMove BtnA1;
  buttonMove BtnA2;
  buttonMove BtnA3;
  buttonMove BtnA4;

  buttonMove BtnB1;
  buttonMove BtnB2;
  buttonMove BtnB3;
  buttonMove BtnB4;

  buttonMove BtnC1;
  buttonMove BtnC2;
  buttonMove BtnC3;
  buttonMove BtnC4;

  QGraphicsScene mScene;
};

#endif // VIEWEXAMPLE_HPP
