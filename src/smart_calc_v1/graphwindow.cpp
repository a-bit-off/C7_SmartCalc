#include "graphwindow.h"
#include "mainwindow.h"
#include "ui_graphwindow.h"

GraphWindow::GraphWindow(QWidget* parent)
    : QDialog(parent), ui(new Ui::GraphWindow) {
  ui->setupUi(this);
}

GraphWindow::~GraphWindow() { delete ui; }

void GraphWindow::on_to_draw_button_clicked(char* text) {
  ui->widget->clearGraphs();
  strcpy(temp_str, text);

  double x_min_num = ui->d_f_1->text().toDouble();
  double x_max_num = ui->d_f_2->text().toDouble();
  double range_x = ui->e_f_1->text().toDouble();
  double range_y = ui->e_f_2->text().toDouble();

  xBegin = x_min_num;
  xEnd = x_max_num;

  //    xBegin = 1;
  //    xEnd = 100;

  ui->widget->xAxis->setRange(-1 * range_x, range_x);
  ui->widget->yAxis->setRange(-1 * range_y, range_y);

  h = 0.1;

  N = (xEnd - xBegin) / h + 2;

  for (X = xBegin; X < xEnd; X += h) {
    x.push_back(X);
    double res = 0;
    s21_smart_calc(text, X, &res);
    y.push_back(res);

  }

  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x, y);

  ui->widget->setInteraction(QCP::iRangeZoom, true);
  ui->widget->setInteraction(QCP::iRangeDrag, true);

  ui->widget->replot();

  x.clear();
  y.clear();
}

void GraphWindow::on_to_draw_button_clicked() {
  GraphWindow::on_to_draw_button_clicked(temp_str);
}
