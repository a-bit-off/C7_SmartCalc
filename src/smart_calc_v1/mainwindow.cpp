#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton__0, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__1, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__2, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__3, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__4, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__5, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__6, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__7, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__8, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__9, SIGNAL(clicked()), this, SLOT(add_symbols()));

    connect(ui->pushButton__plus,  SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__minus, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__div, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__mul, SIGNAL(clicked()), this, SLOT(add_symbols()));

    connect(ui->pushButton__sin, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__cos, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__tan, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__asin, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__acos, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__atan, SIGNAL(clicked()), this, SLOT(add_symbols()));

    connect(ui->pushButton__ln, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__log, SIGNAL(clicked()), this, SLOT(add_symbols()));

    connect(ui->pushButton__sqrt, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__mod, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__pow, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__x, SIGNAL(clicked()), this, SLOT(add_symbols()));

    connect(ui->pushButton__Lscobe, SIGNAL(clicked()), this, SLOT(add_symbols()));
    connect(ui->pushButton__Rscobe, SIGNAL(clicked()), this, SLOT(add_symbols()));

    connect(ui->pushButton__ac, SIGNAL(clicked()), this, SLOT(ac()));
    connect(ui->pushButton__delete, SIGNAL(clicked()), this, SLOT(delete_symbol()));
//    connect(ui->pushButton__equal, SIGNAL(clicked()), this, SLOT(eqal()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::add_symbols()
{
    QPushButton *button = (QPushButton *)sender();
    ui->result_show->setText(ui->result_show->text() + button->text());
}

void MainWindow::eqal()
{

}

void MainWindow::ac()
{
    ui->result_show->setText("");
}

void MainWindow::delete_symbol()
{
    QString str = ui->result_show->text();
    str.remove(-1, 1);
    ui->result_show->setText(str);
}



























