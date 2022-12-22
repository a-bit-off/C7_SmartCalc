#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "graphwindow.h"
#include "qcustomplot.h"
#include "ui_graphwindow.h"

extern "C" {
#include "../s21_smart_calc_v1.0.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
    void digit_numbers();
    void on_pushButton_TOCHKA_clicked();
    void on_pushButton_EQUAL_clicked();
    void operations();
    void functions();
    void on_pushButton_DELETE_clicked();
    void on_pushButton_X_clicked();

 private:
  Ui::MainWindow *ui;
  GraphWindow *window2;
};
#endif  // MAINWINDOW_H
