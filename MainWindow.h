#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <KinectViewer.h>

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
    void on_pushButton_ShowPointCloud_clicked();

private:
    Ui::MainWindow *ui;
    KinectViewer kinect;
};

#endif // MAINWINDOW_H
