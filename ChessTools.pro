CONFIG += qt

QT += widgets

HEADERS += \
    include/gui/mainwindow.h

INCLUDEPATH += \
    include

SOURCES += \
    src/core/main.cpp \
    src/gui/mainwindow.cpp

FORMS += \
    gui/mainwindow.ui
