#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_form.h"
#include "client.h"
class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_pushButton_search_clicked();

private:
    Ui::Form *window;
};

#endif // MAINWINDOW_H
