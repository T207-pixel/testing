#include <QApplication>
#include <QTest>
#include "mainwindow.h"
#include "person.h"
//#include "test.h"

#include <iostream>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}





