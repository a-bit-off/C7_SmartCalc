#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string.h>
#include "../s21_smart_calc_v1.0.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void add_symbols(int flag);
    void x_flag(int *flag);
    void equal();
    void ac();
    void delete_symbol();
private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
