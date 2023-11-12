#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QtTest/QtTest>
#include "../testProject/mainwindow.h"
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QWidget>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

private slots:

//    void appInput1();
//    void appInput2();
//    void appInput3();
//    void personNameInput1();
//    void personNameInput2();
//    void personNameInput3();
//    void personEmailInput1();
//    void personEmailInput2();
//    void personEmailInput3();
//    void personBirthYear1();
//    void personBirthYear2();
//    void personBirthYear3();

////    //////////////////new fragment///////////
//    void max();
//    void max_data();
    void edit();
};

#endif // TEST_H
