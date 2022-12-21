/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton__x;
    QPushButton *pushButton__atan;
    QPushButton *pushButton__tan;
    QPushButton *pushButton__equal;
    QPushButton *pushButton__Lscobe;
    QPushButton *pushButton__delete;
    QPushButton *pushButton__sqrt;
    QPushButton *pushButton__Rscobe;
    QPushButton *pushButton__ln;
    QPushButton *pushButton__log;
    QPushButton *pushButton__cos;
    QPushButton *pushButton__ac;
    QPushButton *pushButton__acos;
    QPushButton *pushButton__mod;
    QPushButton *pushButton__sin;
    QPushButton *pushButton__asin;
    QPushButton *pushButton__pow;
    QPushButton *pushButton__1;
    QPushButton *pushButton__4;
    QPushButton *pushButton__0;
    QPushButton *pushButton__dot;
    QPushButton *pushButton__2;
    QPushButton *pushButton__5;
    QPushButton *pushButton__6;
    QPushButton *pushButton__3;
    QPushButton *pushButton__minus;
    QPushButton *pushButton__mul;
    QPushButton *pushButton__plus;
    QPushButton *pushButton__7;
    QPushButton *pushButton__8;
    QPushButton *pushButton__9;
    QPushButton *pushButton__div;
    QLabel *result_show;
    QLabel *x_show;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(781, 459);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 66, 492, 128));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton__x = new QPushButton(gridLayoutWidget);
        pushButton__x->setObjectName(QString::fromUtf8("pushButton__x"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton__x->sizePolicy().hasHeightForWidth());
        pushButton__x->setSizePolicy(sizePolicy);
        pushButton__x->setAutoRepeatDelay(300);
        pushButton__x->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__x, 3, 7, 1, 1);

        pushButton__atan = new QPushButton(gridLayoutWidget);
        pushButton__atan->setObjectName(QString::fromUtf8("pushButton__atan"));
        sizePolicy.setHeightForWidth(pushButton__atan->sizePolicy().hasHeightForWidth());
        pushButton__atan->setSizePolicy(sizePolicy);
        pushButton__atan->setAutoRepeatDelay(300);
        pushButton__atan->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__atan, 3, 1, 1, 1);

        pushButton__tan = new QPushButton(gridLayoutWidget);
        pushButton__tan->setObjectName(QString::fromUtf8("pushButton__tan"));
        sizePolicy.setHeightForWidth(pushButton__tan->sizePolicy().hasHeightForWidth());
        pushButton__tan->setSizePolicy(sizePolicy);
        pushButton__tan->setAutoRepeatDelay(300);
        pushButton__tan->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__tan, 3, 2, 1, 1);

        pushButton__equal = new QPushButton(gridLayoutWidget);
        pushButton__equal->setObjectName(QString::fromUtf8("pushButton__equal"));
        sizePolicy.setHeightForWidth(pushButton__equal->sizePolicy().hasHeightForWidth());
        pushButton__equal->setSizePolicy(sizePolicy);
        pushButton__equal->setAutoRepeatDelay(300);
        pushButton__equal->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__equal, 4, 7, 1, 1);

        pushButton__Lscobe = new QPushButton(gridLayoutWidget);
        pushButton__Lscobe->setObjectName(QString::fromUtf8("pushButton__Lscobe"));
        sizePolicy.setHeightForWidth(pushButton__Lscobe->sizePolicy().hasHeightForWidth());
        pushButton__Lscobe->setSizePolicy(sizePolicy);
        pushButton__Lscobe->setAutoRepeatDelay(300);
        pushButton__Lscobe->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__Lscobe, 1, 0, 1, 1);

        pushButton__delete = new QPushButton(gridLayoutWidget);
        pushButton__delete->setObjectName(QString::fromUtf8("pushButton__delete"));
        pushButton__delete->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton__delete->sizePolicy().hasHeightForWidth());
        pushButton__delete->setSizePolicy(sizePolicy);
        pushButton__delete->setAutoRepeatDelay(300);
        pushButton__delete->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__delete, 2, 7, 1, 1);

        pushButton__sqrt = new QPushButton(gridLayoutWidget);
        pushButton__sqrt->setObjectName(QString::fromUtf8("pushButton__sqrt"));
        sizePolicy.setHeightForWidth(pushButton__sqrt->sizePolicy().hasHeightForWidth());
        pushButton__sqrt->setSizePolicy(sizePolicy);
        pushButton__sqrt->setAutoRepeatDelay(300);
        pushButton__sqrt->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__sqrt, 3, 0, 1, 1);

        pushButton__Rscobe = new QPushButton(gridLayoutWidget);
        pushButton__Rscobe->setObjectName(QString::fromUtf8("pushButton__Rscobe"));
        sizePolicy.setHeightForWidth(pushButton__Rscobe->sizePolicy().hasHeightForWidth());
        pushButton__Rscobe->setSizePolicy(sizePolicy);
        pushButton__Rscobe->setAutoRepeatDelay(300);
        pushButton__Rscobe->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__Rscobe, 2, 0, 1, 1);

        pushButton__ln = new QPushButton(gridLayoutWidget);
        pushButton__ln->setObjectName(QString::fromUtf8("pushButton__ln"));
        sizePolicy.setHeightForWidth(pushButton__ln->sizePolicy().hasHeightForWidth());
        pushButton__ln->setSizePolicy(sizePolicy);
        pushButton__ln->setAutoRepeatDelay(300);
        pushButton__ln->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__ln, 4, 1, 1, 1);

        pushButton__log = new QPushButton(gridLayoutWidget);
        pushButton__log->setObjectName(QString::fromUtf8("pushButton__log"));
        sizePolicy.setHeightForWidth(pushButton__log->sizePolicy().hasHeightForWidth());
        pushButton__log->setSizePolicy(sizePolicy);
        pushButton__log->setAutoRepeatDelay(300);
        pushButton__log->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__log, 4, 2, 1, 1);

        pushButton__cos = new QPushButton(gridLayoutWidget);
        pushButton__cos->setObjectName(QString::fromUtf8("pushButton__cos"));
        sizePolicy.setHeightForWidth(pushButton__cos->sizePolicy().hasHeightForWidth());
        pushButton__cos->setSizePolicy(sizePolicy);
        pushButton__cos->setAutoRepeatDelay(300);
        pushButton__cos->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__cos, 2, 2, 1, 1);

        pushButton__ac = new QPushButton(gridLayoutWidget);
        pushButton__ac->setObjectName(QString::fromUtf8("pushButton__ac"));
        sizePolicy.setHeightForWidth(pushButton__ac->sizePolicy().hasHeightForWidth());
        pushButton__ac->setSizePolicy(sizePolicy);
        pushButton__ac->setAutoFillBackground(false);
        pushButton__ac->setAutoRepeatDelay(300);
        pushButton__ac->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__ac, 1, 7, 1, 1);

        pushButton__acos = new QPushButton(gridLayoutWidget);
        pushButton__acos->setObjectName(QString::fromUtf8("pushButton__acos"));
        sizePolicy.setHeightForWidth(pushButton__acos->sizePolicy().hasHeightForWidth());
        pushButton__acos->setSizePolicy(sizePolicy);
        pushButton__acos->setAutoRepeatDelay(300);
        pushButton__acos->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__acos, 2, 1, 1, 1);

        pushButton__mod = new QPushButton(gridLayoutWidget);
        pushButton__mod->setObjectName(QString::fromUtf8("pushButton__mod"));
        sizePolicy.setHeightForWidth(pushButton__mod->sizePolicy().hasHeightForWidth());
        pushButton__mod->setSizePolicy(sizePolicy);
        pushButton__mod->setAutoRepeatDelay(300);
        pushButton__mod->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__mod, 4, 0, 1, 1);

        pushButton__sin = new QPushButton(gridLayoutWidget);
        pushButton__sin->setObjectName(QString::fromUtf8("pushButton__sin"));
        sizePolicy.setHeightForWidth(pushButton__sin->sizePolicy().hasHeightForWidth());
        pushButton__sin->setSizePolicy(sizePolicy);
        pushButton__sin->setAutoRepeatDelay(300);
        pushButton__sin->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__sin, 1, 2, 1, 1);

        pushButton__asin = new QPushButton(gridLayoutWidget);
        pushButton__asin->setObjectName(QString::fromUtf8("pushButton__asin"));
        sizePolicy.setHeightForWidth(pushButton__asin->sizePolicy().hasHeightForWidth());
        pushButton__asin->setSizePolicy(sizePolicy);
        pushButton__asin->setAutoRepeatDelay(300);
        pushButton__asin->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__asin, 1, 1, 1, 1);

        pushButton__pow = new QPushButton(gridLayoutWidget);
        pushButton__pow->setObjectName(QString::fromUtf8("pushButton__pow"));
        sizePolicy.setHeightForWidth(pushButton__pow->sizePolicy().hasHeightForWidth());
        pushButton__pow->setSizePolicy(sizePolicy);
        pushButton__pow->setAutoRepeatDelay(300);
        pushButton__pow->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__pow, 4, 3, 1, 1);

        pushButton__1 = new QPushButton(gridLayoutWidget);
        pushButton__1->setObjectName(QString::fromUtf8("pushButton__1"));
        sizePolicy.setHeightForWidth(pushButton__1->sizePolicy().hasHeightForWidth());
        pushButton__1->setSizePolicy(sizePolicy);
        pushButton__1->setAutoRepeatDelay(300);
        pushButton__1->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__1, 3, 3, 1, 1);

        pushButton__4 = new QPushButton(gridLayoutWidget);
        pushButton__4->setObjectName(QString::fromUtf8("pushButton__4"));
        sizePolicy.setHeightForWidth(pushButton__4->sizePolicy().hasHeightForWidth());
        pushButton__4->setSizePolicy(sizePolicy);
        pushButton__4->setAutoRepeatDelay(300);
        pushButton__4->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__4, 2, 3, 1, 1);

        pushButton__0 = new QPushButton(gridLayoutWidget);
        pushButton__0->setObjectName(QString::fromUtf8("pushButton__0"));
        sizePolicy.setHeightForWidth(pushButton__0->sizePolicy().hasHeightForWidth());
        pushButton__0->setSizePolicy(sizePolicy);
        pushButton__0->setAutoRepeatDelay(300);
        pushButton__0->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__0, 4, 4, 1, 1);

        pushButton__dot = new QPushButton(gridLayoutWidget);
        pushButton__dot->setObjectName(QString::fromUtf8("pushButton__dot"));
        sizePolicy.setHeightForWidth(pushButton__dot->sizePolicy().hasHeightForWidth());
        pushButton__dot->setSizePolicy(sizePolicy);
        pushButton__dot->setAutoRepeatDelay(300);
        pushButton__dot->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__dot, 4, 5, 1, 1);

        pushButton__2 = new QPushButton(gridLayoutWidget);
        pushButton__2->setObjectName(QString::fromUtf8("pushButton__2"));
        sizePolicy.setHeightForWidth(pushButton__2->sizePolicy().hasHeightForWidth());
        pushButton__2->setSizePolicy(sizePolicy);
        pushButton__2->setAutoRepeatDelay(300);
        pushButton__2->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__2, 3, 4, 1, 1);

        pushButton__5 = new QPushButton(gridLayoutWidget);
        pushButton__5->setObjectName(QString::fromUtf8("pushButton__5"));
        sizePolicy.setHeightForWidth(pushButton__5->sizePolicy().hasHeightForWidth());
        pushButton__5->setSizePolicy(sizePolicy);
        pushButton__5->setAutoRepeatDelay(300);
        pushButton__5->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__5, 2, 4, 1, 1);

        pushButton__6 = new QPushButton(gridLayoutWidget);
        pushButton__6->setObjectName(QString::fromUtf8("pushButton__6"));
        sizePolicy.setHeightForWidth(pushButton__6->sizePolicy().hasHeightForWidth());
        pushButton__6->setSizePolicy(sizePolicy);
        pushButton__6->setAutoRepeatDelay(300);
        pushButton__6->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__6, 2, 5, 1, 1);

        pushButton__3 = new QPushButton(gridLayoutWidget);
        pushButton__3->setObjectName(QString::fromUtf8("pushButton__3"));
        sizePolicy.setHeightForWidth(pushButton__3->sizePolicy().hasHeightForWidth());
        pushButton__3->setSizePolicy(sizePolicy);
        pushButton__3->setAutoRepeatDelay(300);
        pushButton__3->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__3, 3, 5, 1, 1);

        pushButton__minus = new QPushButton(gridLayoutWidget);
        pushButton__minus->setObjectName(QString::fromUtf8("pushButton__minus"));
        sizePolicy.setHeightForWidth(pushButton__minus->sizePolicy().hasHeightForWidth());
        pushButton__minus->setSizePolicy(sizePolicy);
        pushButton__minus->setAutoRepeatDelay(300);
        pushButton__minus->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__minus, 3, 6, 1, 1);

        pushButton__mul = new QPushButton(gridLayoutWidget);
        pushButton__mul->setObjectName(QString::fromUtf8("pushButton__mul"));
        sizePolicy.setHeightForWidth(pushButton__mul->sizePolicy().hasHeightForWidth());
        pushButton__mul->setSizePolicy(sizePolicy);
        pushButton__mul->setAutoRepeatDelay(300);
        pushButton__mul->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__mul, 2, 6, 1, 1);

        pushButton__plus = new QPushButton(gridLayoutWidget);
        pushButton__plus->setObjectName(QString::fromUtf8("pushButton__plus"));
        sizePolicy.setHeightForWidth(pushButton__plus->sizePolicy().hasHeightForWidth());
        pushButton__plus->setSizePolicy(sizePolicy);
        pushButton__plus->setAutoRepeatDelay(300);
        pushButton__plus->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__plus, 4, 6, 1, 1);

        pushButton__7 = new QPushButton(gridLayoutWidget);
        pushButton__7->setObjectName(QString::fromUtf8("pushButton__7"));
        sizePolicy.setHeightForWidth(pushButton__7->sizePolicy().hasHeightForWidth());
        pushButton__7->setSizePolicy(sizePolicy);
        pushButton__7->setStyleSheet(QString::fromUtf8(""));
        pushButton__7->setAutoRepeatDelay(300);
        pushButton__7->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__7, 1, 3, 1, 1);

        pushButton__8 = new QPushButton(gridLayoutWidget);
        pushButton__8->setObjectName(QString::fromUtf8("pushButton__8"));
        sizePolicy.setHeightForWidth(pushButton__8->sizePolicy().hasHeightForWidth());
        pushButton__8->setSizePolicy(sizePolicy);
        pushButton__8->setAutoRepeatDelay(300);
        pushButton__8->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__8, 1, 4, 1, 1);

        pushButton__9 = new QPushButton(gridLayoutWidget);
        pushButton__9->setObjectName(QString::fromUtf8("pushButton__9"));
        sizePolicy.setHeightForWidth(pushButton__9->sizePolicy().hasHeightForWidth());
        pushButton__9->setSizePolicy(sizePolicy);
        pushButton__9->setAutoRepeatDelay(300);
        pushButton__9->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__9, 1, 5, 1, 1);

        pushButton__div = new QPushButton(gridLayoutWidget);
        pushButton__div->setObjectName(QString::fromUtf8("pushButton__div"));
        sizePolicy.setHeightForWidth(pushButton__div->sizePolicy().hasHeightForWidth());
        pushButton__div->setSizePolicy(sizePolicy);
        pushButton__div->setAutoRepeatDelay(300);
        pushButton__div->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton__div, 1, 6, 1, 1);

        result_show = new QLabel(centralwidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(15, 11, 281, 40));
        result_show->setStyleSheet(QString::fromUtf8("background-color : rgba(99, 99, 99, 0.1);\n"
""));
        x_show = new QLabel(centralwidget);
        x_show->setObjectName(QString::fromUtf8("x_show"));
        x_show->setGeometry(QRect(303, 40, 111, 21));
        x_show->setStyleSheet(QString::fromUtf8("\n"
"\n"
"background-color : rgba(98, 99, 99, 0.1);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton__x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton__atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton__tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton__equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton__Lscobe->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton__delete->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        pushButton__sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton__Rscobe->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton__ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton__log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton__cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton__ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton__acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton__mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton__sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton__asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton__pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton__1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton__4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton__0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton__dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton__2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton__5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton__6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton__3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton__minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton__mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton__plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton__7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton__8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton__9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton__div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        result_show->setText(QString());
        x_show->setText(QCoreApplication::translate("MainWindow", "  x = ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
