QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../s21_smart_calc_v1.0.c \
    ../s21_polish_notation.c \
    ../s21_helpers.c \
    ../s21_stack.c \
    ../s21_validator.c \
    graphwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp

HEADERS += \
    ../s21_smart_calc_v1.0.h \
    graphwindow.h \
    mainwindow.h \
    qcustomplot.h

FORMS += \
    graphwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
