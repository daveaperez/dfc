#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QListWidgetItem>

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
    void on_butExecutable_released();

private:
    Ui::MainWindow *ui;
    void refreshOutput();
    void setCategories();
    void setApplicationExecutable(QString value);
};

#endif // MAINWINDOW_H
