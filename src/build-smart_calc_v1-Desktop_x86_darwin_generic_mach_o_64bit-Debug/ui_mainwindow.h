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
    QPushButton *pushButton_X;
    QPushButton *pushButton_ATAN;
    QPushButton *pushButton_TAN;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_open_bracket;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_SQRT;
    QPushButton *pushButton_close_bracket;
    QPushButton *pushButton_LN;
    QPushButton *pushButton_LOG;
    QPushButton *pushButton_COS;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_ACOS;
    QPushButton *pushButton_MOD;
    QPushButton *pushButton_SIN;
    QPushButton *pushButton_ASIN;
    QPushButton *pushButton_POW;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_add;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_divide;
    QLabel *result_label;
    QLabel *value_of_x;

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
        pushButton_X = new QPushButton(gridLayoutWidget);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_X->sizePolicy().hasHeightForWidth());
        pushButton_X->setSizePolicy(sizePolicy);
        pushButton_X->setAutoRepeatDelay(300);
        pushButton_X->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_X, 3, 7, 1, 1);

        pushButton_ATAN = new QPushButton(gridLayoutWidget);
        pushButton_ATAN->setObjectName(QString::fromUtf8("pushButton_ATAN"));
        sizePolicy.setHeightForWidth(pushButton_ATAN->sizePolicy().hasHeightForWidth());
        pushButton_ATAN->setSizePolicy(sizePolicy);
        pushButton_ATAN->setAutoRepeatDelay(300);
        pushButton_ATAN->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_ATAN, 3, 1, 1, 1);

        pushButton_TAN = new QPushButton(gridLayoutWidget);
        pushButton_TAN->setObjectName(QString::fromUtf8("pushButton_TAN"));
        sizePolicy.setHeightForWidth(pushButton_TAN->sizePolicy().hasHeightForWidth());
        pushButton_TAN->setSizePolicy(sizePolicy);
        pushButton_TAN->setAutoRepeatDelay(300);
        pushButton_TAN->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_TAN, 3, 2, 1, 1);

        pushButton_equal = new QPushButton(gridLayoutWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setAutoRepeatDelay(300);
        pushButton_equal->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_equal, 4, 7, 1, 1);

        pushButton_open_bracket = new QPushButton(gridLayoutWidget);
        pushButton_open_bracket->setObjectName(QString::fromUtf8("pushButton_open_bracket"));
        sizePolicy.setHeightForWidth(pushButton_open_bracket->sizePolicy().hasHeightForWidth());
        pushButton_open_bracket->setSizePolicy(sizePolicy);
        pushButton_open_bracket->setAutoRepeatDelay(300);
        pushButton_open_bracket->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_open_bracket, 1, 0, 1, 1);

        pushButton_delete = new QPushButton(gridLayoutWidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy);
        pushButton_delete->setAutoRepeatDelay(300);
        pushButton_delete->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_delete, 2, 7, 1, 1);

        pushButton_SQRT = new QPushButton(gridLayoutWidget);
        pushButton_SQRT->setObjectName(QString::fromUtf8("pushButton_SQRT"));
        sizePolicy.setHeightForWidth(pushButton_SQRT->sizePolicy().hasHeightForWidth());
        pushButton_SQRT->setSizePolicy(sizePolicy);
        pushButton_SQRT->setAutoRepeatDelay(300);
        pushButton_SQRT->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_SQRT, 3, 0, 1, 1);

        pushButton_close_bracket = new QPushButton(gridLayoutWidget);
        pushButton_close_bracket->setObjectName(QString::fromUtf8("pushButton_close_bracket"));
        sizePolicy.setHeightForWidth(pushButton_close_bracket->sizePolicy().hasHeightForWidth());
        pushButton_close_bracket->setSizePolicy(sizePolicy);
        pushButton_close_bracket->setAutoRepeatDelay(300);
        pushButton_close_bracket->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_close_bracket, 2, 0, 1, 1);

        pushButton_LN = new QPushButton(gridLayoutWidget);
        pushButton_LN->setObjectName(QString::fromUtf8("pushButton_LN"));
        sizePolicy.setHeightForWidth(pushButton_LN->sizePolicy().hasHeightForWidth());
        pushButton_LN->setSizePolicy(sizePolicy);
        pushButton_LN->setAutoRepeatDelay(300);
        pushButton_LN->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_LN, 4, 1, 1, 1);

        pushButton_LOG = new QPushButton(gridLayoutWidget);
        pushButton_LOG->setObjectName(QString::fromUtf8("pushButton_LOG"));
        sizePolicy.setHeightForWidth(pushButton_LOG->sizePolicy().hasHeightForWidth());
        pushButton_LOG->setSizePolicy(sizePolicy);
        pushButton_LOG->setAutoRepeatDelay(300);
        pushButton_LOG->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_LOG, 4, 2, 1, 1);

        pushButton_COS = new QPushButton(gridLayoutWidget);
        pushButton_COS->setObjectName(QString::fromUtf8("pushButton_COS"));
        sizePolicy.setHeightForWidth(pushButton_COS->sizePolicy().hasHeightForWidth());
        pushButton_COS->setSizePolicy(sizePolicy);
        pushButton_COS->setAutoRepeatDelay(300);
        pushButton_COS->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_COS, 2, 2, 1, 1);

        pushButton_AC = new QPushButton(gridLayoutWidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        sizePolicy.setHeightForWidth(pushButton_AC->sizePolicy().hasHeightForWidth());
        pushButton_AC->setSizePolicy(sizePolicy);
        pushButton_AC->setAutoFillBackground(false);
        pushButton_AC->setAutoRepeatDelay(300);
        pushButton_AC->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_AC, 1, 7, 1, 1);

        pushButton_ACOS = new QPushButton(gridLayoutWidget);
        pushButton_ACOS->setObjectName(QString::fromUtf8("pushButton_ACOS"));
        sizePolicy.setHeightForWidth(pushButton_ACOS->sizePolicy().hasHeightForWidth());
        pushButton_ACOS->setSizePolicy(sizePolicy);
        pushButton_ACOS->setAutoRepeatDelay(300);
        pushButton_ACOS->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_ACOS, 2, 1, 1, 1);

        pushButton_MOD = new QPushButton(gridLayoutWidget);
        pushButton_MOD->setObjectName(QString::fromUtf8("pushButton_MOD"));
        sizePolicy.setHeightForWidth(pushButton_MOD->sizePolicy().hasHeightForWidth());
        pushButton_MOD->setSizePolicy(sizePolicy);
        pushButton_MOD->setAutoRepeatDelay(300);
        pushButton_MOD->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_MOD, 4, 0, 1, 1);

        pushButton_SIN = new QPushButton(gridLayoutWidget);
        pushButton_SIN->setObjectName(QString::fromUtf8("pushButton_SIN"));
        sizePolicy.setHeightForWidth(pushButton_SIN->sizePolicy().hasHeightForWidth());
        pushButton_SIN->setSizePolicy(sizePolicy);
        pushButton_SIN->setAutoRepeatDelay(300);
        pushButton_SIN->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_SIN, 1, 2, 1, 1);

        pushButton_ASIN = new QPushButton(gridLayoutWidget);
        pushButton_ASIN->setObjectName(QString::fromUtf8("pushButton_ASIN"));
        sizePolicy.setHeightForWidth(pushButton_ASIN->sizePolicy().hasHeightForWidth());
        pushButton_ASIN->setSizePolicy(sizePolicy);
        pushButton_ASIN->setAutoRepeatDelay(300);
        pushButton_ASIN->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_ASIN, 1, 1, 1, 1);

        pushButton_POW = new QPushButton(gridLayoutWidget);
        pushButton_POW->setObjectName(QString::fromUtf8("pushButton_POW"));
        sizePolicy.setHeightForWidth(pushButton_POW->sizePolicy().hasHeightForWidth());
        pushButton_POW->setSizePolicy(sizePolicy);
        pushButton_POW->setAutoRepeatDelay(300);
        pushButton_POW->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_POW, 4, 3, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setAutoRepeatDelay(300);
        pushButton_1->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_1, 3, 3, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setAutoRepeatDelay(300);
        pushButton_4->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_4, 2, 3, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setAutoRepeatDelay(300);
        pushButton_0->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_0, 4, 4, 1, 1);

        pushButton_dot = new QPushButton(gridLayoutWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        pushButton_dot->setAutoRepeatDelay(300);
        pushButton_dot->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_dot, 4, 5, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setAutoRepeatDelay(300);
        pushButton_2->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_2, 3, 4, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setAutoRepeatDelay(300);
        pushButton_5->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_5, 2, 4, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setAutoRepeatDelay(300);
        pushButton_6->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_6, 2, 5, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setAutoRepeatDelay(300);
        pushButton_3->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_3, 3, 5, 1, 1);

        pushButton_sub = new QPushButton(gridLayoutWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        sizePolicy.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy);
        pushButton_sub->setAutoRepeatDelay(300);
        pushButton_sub->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_sub, 3, 6, 1, 1);

        pushButton_mult = new QPushButton(gridLayoutWidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        sizePolicy.setHeightForWidth(pushButton_mult->sizePolicy().hasHeightForWidth());
        pushButton_mult->setSizePolicy(sizePolicy);
        pushButton_mult->setAutoRepeatDelay(300);
        pushButton_mult->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_mult, 2, 6, 1, 1);

        pushButton_add = new QPushButton(gridLayoutWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setAutoRepeatDelay(300);
        pushButton_add->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_add, 4, 6, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QString::fromUtf8(""));
        pushButton_7->setAutoRepeatDelay(300);
        pushButton_7->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_7, 1, 3, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setAutoRepeatDelay(300);
        pushButton_8->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_8, 1, 4, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setAutoRepeatDelay(300);
        pushButton_9->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_9, 1, 5, 1, 1);

        pushButton_divide = new QPushButton(gridLayoutWidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        sizePolicy.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy);
        pushButton_divide->setAutoRepeatDelay(300);
        pushButton_divide->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_divide, 1, 6, 1, 1);

        result_label = new QLabel(centralwidget);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        result_label->setGeometry(QRect(15, 11, 281, 40));
        result_label->setStyleSheet(QString::fromUtf8("background-color : rgba(99, 99, 99, 0.1);\n"
""));
        value_of_x = new QLabel(centralwidget);
        value_of_x->setObjectName(QString::fromUtf8("value_of_x"));
        value_of_x->setGeometry(QRect(303, 40, 111, 21));
        value_of_x->setStyleSheet(QString::fromUtf8("\n"
"\n"
"background-color : rgba(98, 99, 99, 0.1);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_X->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_ATAN->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_TAN->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_open_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        pushButton_SQRT->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_close_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_LN->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_LOG->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_COS->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_ACOS->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_MOD->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_SIN->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_ASIN->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_POW->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        result_label->setText(QString());
        value_of_x->setText(QCoreApplication::translate("MainWindow", "  x = ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
