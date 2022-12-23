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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_RIGHT_SKOBKA;
    QPushButton *pushButton_TOCHKA;
    QPushButton *pushButton_SIN;
    QPushButton *pushButton_DIVIDE;
    QPushButton *pushButton_TAN;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_SQRT;
    QPushButton *pushButton_1;
    QPushButton *pushButton_ATAN;
    QPushButton *pushButton_LEFT_SKOBKA;
    QPushButton *pushButton_X;
    QLabel *result_show;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_ACOS;
    QPushButton *pushButton_4;
    QPushButton *pushButton_PLUS;
    QPushButton *pushButton_POW;
    QPushButton *pushButton_8;
    QPushButton *pushButton_LOG;
    QPushButton *pushButton_COS;
    QPushButton *pushButton_7;
    QPushButton *pushButton_0;
    QPushButton *pushButton_MINUS;
    QPushButton *pushButton_6;
    QPushButton *pushButton_LN;
    QPushButton *pushButton_MUL;
    QPushButton *pushButton_ASIN;
    QPushButton *pushButton_EQUAL;
    QPushButton *pushButton_DELETE;
    QPushButton *pushButton_MOD;
    QPushButton *pushButton_DELETE_SYMBOL;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(472, 330);
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica")});
        font.setPointSize(18);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 451, 311));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_RIGHT_SKOBKA = new QPushButton(layoutWidget);
        pushButton_RIGHT_SKOBKA->setObjectName(QString::fromUtf8("pushButton_RIGHT_SKOBKA"));
        pushButton_RIGHT_SKOBKA->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_RIGHT_SKOBKA, 6, 0, 1, 3);

        pushButton_TOCHKA = new QPushButton(layoutWidget);
        pushButton_TOCHKA->setObjectName(QString::fromUtf8("pushButton_TOCHKA"));
        pushButton_TOCHKA->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_TOCHKA, 6, 5, 1, 1);

        pushButton_SIN = new QPushButton(layoutWidget);
        pushButton_SIN->setObjectName(QString::fromUtf8("pushButton_SIN"));
        pushButton_SIN->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_SIN, 2, 2, 1, 1);

        pushButton_DIVIDE = new QPushButton(layoutWidget);
        pushButton_DIVIDE->setObjectName(QString::fromUtf8("pushButton_DIVIDE"));
        pushButton_DIVIDE->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_DIVIDE, 2, 5, 1, 1);

        pushButton_TAN = new QPushButton(layoutWidget);
        pushButton_TAN->setObjectName(QString::fromUtf8("pushButton_TAN"));
        pushButton_TAN->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_TAN, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_2, 5, 4, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_3, 5, 5, 1, 1);

        pushButton_SQRT = new QPushButton(layoutWidget);
        pushButton_SQRT->setObjectName(QString::fromUtf8("pushButton_SQRT"));
        pushButton_SQRT->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_SQRT, 4, 2, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_1, 5, 3, 1, 1);

        pushButton_ATAN = new QPushButton(layoutWidget);
        pushButton_ATAN->setObjectName(QString::fromUtf8("pushButton_ATAN"));
        pushButton_ATAN->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_ATAN, 3, 0, 1, 1);

        pushButton_LEFT_SKOBKA = new QPushButton(layoutWidget);
        pushButton_LEFT_SKOBKA->setObjectName(QString::fromUtf8("pushButton_LEFT_SKOBKA"));
        pushButton_LEFT_SKOBKA->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_LEFT_SKOBKA, 5, 0, 1, 3);

        pushButton_X = new QPushButton(layoutWidget);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        pushButton_X->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_X, 6, 4, 1, 1);

        result_show = new QLabel(layoutWidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica")});
        font1.setPointSize(23);
        font1.setBold(true);
        result_show->setFont(font1);
        result_show->setLayoutDirection(Qt::RightToLeft);
        result_show->setStyleSheet(QString::fromUtf8("color:rgb(174, 198, 255);\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}"));
        result_show->setScaledContents(false);
        result_show->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(result_show, 0, 0, 1, 7);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_9, 3, 5, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_5, 4, 4, 1, 1);

        pushButton_ACOS = new QPushButton(layoutWidget);
        pushButton_ACOS->setObjectName(QString::fromUtf8("pushButton_ACOS"));
        pushButton_ACOS->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_ACOS, 3, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_4, 4, 3, 1, 1);

        pushButton_PLUS = new QPushButton(layoutWidget);
        pushButton_PLUS->setObjectName(QString::fromUtf8("pushButton_PLUS"));
        pushButton_PLUS->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_PLUS, 5, 6, 1, 1);

        pushButton_POW = new QPushButton(layoutWidget);
        pushButton_POW->setObjectName(QString::fromUtf8("pushButton_POW"));
        pushButton_POW->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_POW, 2, 3, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_8, 3, 4, 1, 1);

        pushButton_LOG = new QPushButton(layoutWidget);
        pushButton_LOG->setObjectName(QString::fromUtf8("pushButton_LOG"));
        pushButton_LOG->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_LOG, 4, 0, 1, 1);

        pushButton_COS = new QPushButton(layoutWidget);
        pushButton_COS->setObjectName(QString::fromUtf8("pushButton_COS"));
        pushButton_COS->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_COS, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_7, 3, 3, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_0, 6, 3, 1, 1);

        pushButton_MINUS = new QPushButton(layoutWidget);
        pushButton_MINUS->setObjectName(QString::fromUtf8("pushButton_MINUS"));
        pushButton_MINUS->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_MINUS, 4, 6, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_6, 4, 5, 1, 1);

        pushButton_LN = new QPushButton(layoutWidget);
        pushButton_LN->setObjectName(QString::fromUtf8("pushButton_LN"));
        pushButton_LN->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_LN, 4, 1, 1, 1);

        pushButton_MUL = new QPushButton(layoutWidget);
        pushButton_MUL->setObjectName(QString::fromUtf8("pushButton_MUL"));
        pushButton_MUL->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_MUL, 3, 6, 1, 1);

        pushButton_ASIN = new QPushButton(layoutWidget);
        pushButton_ASIN->setObjectName(QString::fromUtf8("pushButton_ASIN"));
        pushButton_ASIN->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_ASIN, 3, 2, 1, 1);

        pushButton_EQUAL = new QPushButton(layoutWidget);
        pushButton_EQUAL->setObjectName(QString::fromUtf8("pushButton_EQUAL"));
        pushButton_EQUAL->setStyleSheet(QString::fromUtf8("background-color:rgb(76, 84, 108);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_EQUAL, 6, 6, 1, 1);

        pushButton_DELETE = new QPushButton(layoutWidget);
        pushButton_DELETE->setObjectName(QString::fromUtf8("pushButton_DELETE"));
        pushButton_DELETE->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 84, 108);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_DELETE, 2, 6, 1, 1);

        pushButton_MOD = new QPushButton(layoutWidget);
        pushButton_MOD->setObjectName(QString::fromUtf8("pushButton_MOD"));
        pushButton_MOD->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_MOD, 2, 4, 1, 1);

        pushButton_DELETE_SYMBOL = new QPushButton(layoutWidget);
        pushButton_DELETE_SYMBOL->setObjectName(QString::fromUtf8("pushButton_DELETE_SYMBOL"));
        pushButton_DELETE_SYMBOL->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 84, 108);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_DELETE_SYMBOL, 1, 6, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_RIGHT_SKOBKA->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_TOCHKA->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_SIN->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_DIVIDE->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_TAN->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_SQRT->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_ATAN->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_LEFT_SKOBKA->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_X->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        result_show->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_ACOS->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_PLUS->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_POW->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_LOG->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_COS->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_MINUS->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_LN->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_MUL->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_ASIN->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_EQUAL->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_DELETE->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_MOD->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_DELETE_SYMBOL->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
