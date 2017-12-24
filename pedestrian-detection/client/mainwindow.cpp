#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    window=new Ui::Form;
    window->setupUi(this);
}

MainWindow::~MainWindow()
{

}

void MainWindow::on_pushButton_search_clicked()
{

}
