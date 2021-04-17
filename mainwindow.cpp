#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    scene = new Scene(this);
    scene->setSceneRect(10,10,260,200);
    view = new QGraphicsView(scene);
    setCentralWidget(view);

    CustomRectItem* rectItem1 = new CustomRectItem(QRect(0,0,80,80));
    rectItem1->setPos(50,50);
    rectItem1->setBrush(Qt::gray);
    scene->addItem(rectItem1);

    CustomRectItem* rectItem2 = new CustomRectItem(QRect(0,0,60,60));
    rectItem2->setPos(160,60);
    rectItem2->setBrush(Qt::magenta);
    scene->addItem(rectItem2);
}
