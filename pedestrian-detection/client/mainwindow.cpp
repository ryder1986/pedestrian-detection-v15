#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    Ui::Form *f=new Ui::Form;
    f->setupUi(this);
}

MainWindow::~MainWindow()
{

}
