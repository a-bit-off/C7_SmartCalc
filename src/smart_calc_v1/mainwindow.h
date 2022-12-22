#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "graphwindow.h"
#include "qcustomplot.h"
#include "ui_graphwindow.h"


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
    void TOCHKA_clicked();
    void EQUAL_clicked();
    void operations();
    void functions();
    void delete_clicked();
    void X_clicked();

 private:
  Ui::MainWindow *ui;
  GraphWindow *window2;
};
#endif  // MAINWINDOW_H
