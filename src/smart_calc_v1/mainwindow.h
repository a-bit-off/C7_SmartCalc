#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QMessageBox>

extern "C" {
#include "../s21_smart_calc_v1.0.h"
}

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
   void press_button();
   void press_AC();
   void press_equal();
   void on_result_label_returnPressed();
   void delete_symbol();
   void press_graphics();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
