#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QTimer>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel *Label1;
    QTimer *timer;
    QPushButton *horizbtn;
    QPushButton *vertbtn;

private slots:
    void horiz();
    void vert();
    void goHoriz();
    void goVert();
};

#endif // MAINWINDOW_H
