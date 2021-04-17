#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include "scene.h"
#include "customrectitem.h"

class MainWindow : public QMainWindow
{
public:
    explicit MainWindow(QWidget *parent = 0);
private:
    QGraphicsView* view;
    QGraphicsScene* scene;
};

#endif // MAINWINDOW_H
