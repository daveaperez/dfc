#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCategories();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCategories()
{
    QStringList catList;
    catList.append("AudioVideo");
    catList.append("Audio");
    catList.append("Video");
    catList.append("Development");
    catList.append("Education");
    catList.append("Game");
    catList.append("Graphics");
    catList.append("Network");
    catList.append("Office");
    catList.append("Science");
    catList.append("Settings");
    catList.append("System");
    catList.append("Utility");
    ui->lvCategories->addItems(catList);
}

void MainWindow::refreshOutput()
{
    ui->txtOutput->clear();
}

void MainWindow::setApplicationExecutable(QString value)
{
    ui->txtExecutable->setText(value);
}

void MainWindow::on_butExecutable_released()
{
    QFileDialog *fd = new QFileDialog(this);
    fd->exec();
    QStringList list = fd->selectedFiles();
    if (list.count() == 0)
        return;
    setApplicationExecutable(list.at(0));
    delete fd;

}
