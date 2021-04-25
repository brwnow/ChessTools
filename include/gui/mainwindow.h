#ifndef _CHESSTOOLS_GUI_MAINWINDOW_H_
#define _CHESSTOOLS_GUI_MAINWINDOW_H_

#include <QtWidgets/QMainWindow>

#include "ui_mainwindow.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow();

private:
    Ui::MainWindow ui;
};

#endif // _CHESSTOOLS_GUI_MAINWINDOW_H_
