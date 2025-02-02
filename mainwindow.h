#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include "laserscene.h"
#include "laserfunctions.h"
#include "modeldata.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionQuit_triggered();
    void redraw();
    void on_action_Export_triggered();
    void on_pushButton_clicked();
    void on_action_Import_triggered();
    void spinImport();

    void on_stepSpin_clicked();

    void on_spinObject_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    LaserScene *scene;
    QTimer *redrawTimer;
    QTime *rotateTime;
    void ExportILDA();
    ModelData md;
    int rotAngle;

};

#endif // MAINWINDOW_H
