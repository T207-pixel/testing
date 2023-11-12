#include <QTest>

#include "../testProject/person.h"
#include "test.h"

Test::Test(QObject *parent) : QObject{parent} {}

//void Test::personNameInput1() {
//    Person person;
//    person.setName("tim");
//    QCOMPARE(person.validateName(), true);
//}

//void Test::personNameInput2() {
//    Person person;
//    person.setName("Tim");
//    QCOMPARE(person.validateName(), true);
//}

//void Test::personNameInput3() {
//    Person person;
//    person.setName("9im");
//    QCOMPARE(person.validateName(), true);
//}

//void Test::personEmailInput1() {
//    Person person;
//    person.setEmail("mik@noinfo#com");
//    QCOMPARE(person.validateEmail(), true);
//}

//void Test::personEmailInput2() {
//    Person person;
//    person.setEmail("qret jmnk@mail.com");
//    QCOMPARE(person.validateEmail(), true);
//}

//void Test::personEmailInput3() {
//    Person person;
//    person.setEmail("mik@gmail.com");
//    QCOMPARE(person.validateEmail(), true);
//}

//void Test::max_data() {
//    QTest::addColumn<int>("first");
//    QTest::addColumn<int>("second");
//    QTest::addColumn<int>("result");

//    QTest::newRow("min_data_1") << 1 << 0 << 1;
//    QTest::newRow("min_data_2") << -1 << 1 << 1;
//    QTest::newRow("min_data_3") << 4 << 8 << 8;
//    QTest::newRow("min_data_4") << 0 << 0 << 0;
//    QTest::newRow("min_data_5") << 1 << 1 << 1;
//    QTest::newRow("min_data_6") << -10 << -5 << -5;
//}

//void Test::max() {
//    Person person;
//    QFETCH(int, first);
//    QFETCH(int, second);
//    QFETCH(int, result);
//    QCOMPARE(person.max(first, second), result);
//}

//void Test::personBirthYear1() {
//    Person person;
//    person.setBirthYear("1800");
//    QCOMPARE(person.validateYear(), true);
//}

//void Test::personBirthYear2() {
//    Person person;
//    person.setBirthYear("1993");
//    QCOMPARE(person.validateYear(), true);
//}

//void Test::personBirthYear3() {
//    Person person;
//    person.setBirthYear("e234");
//    QCOMPARE(person.validateYear(), true);
//}

//void Test::appInput1() {
//    MainWindow window;

//    QLineEdit* lineEdit1 = window.findChild<QLineEdit*>("nameField");
//    QLineEdit* lineEdit2 = window.findChild<QLineEdit*>("yearField");
//    QLineEdit* lineEdit3 = window.findChild<QLineEdit*>("emailField");
//    QPushButton* button = window.findChild<QPushButton*>("pushButton");
//    QLabel* label = window.findChild<QLabel*>("statusLabel");

//    lineEdit1->setText("tim");
//    lineEdit2->setText("2002");
//    lineEdit3->setText("tim@mail.ru");

//    QTest::mouseClick(button, Qt::LeftButton);

//    QVERIFY(label->text() == "fine");
//}

//void Test::appInput2() {
//    MainWindow window;

//    QLineEdit* lineEdit1 = window.findChild<QLineEdit*>("nameField");
//    QLineEdit* lineEdit2 = window.findChild<QLineEdit*>("yearField");
//    QLineEdit* lineEdit3 = window.findChild<QLineEdit*>("emailField");
//    QPushButton* button = window.findChild<QPushButton*>("pushButton");
//    QLabel* label = window.findChild<QLabel*>("statusLabel");

//    lineEdit1->setText("Tim");
//    lineEdit2->setText("2002");
//    lineEdit3->setText("tim@mail.ru");

//    QTest::mouseClick(button, Qt::LeftButton);

//    QVERIFY(label->text() == "fine");
//}

//void Test::appInput3() {
//    MainWindow window;

//    QLineEdit* lineEdit1 = window.findChild<QLineEdit*>("nameField");
//    QLineEdit* lineEdit2 = window.findChild<QLineEdit*>("yearField");
//    QLineEdit* lineEdit3 = window.findChild<QLineEdit*>("emailField");
//    QPushButton* button = window.findChild<QPushButton*>("pushButton");
//    QLabel* label = window.findChild<QLabel*>("statusLabel");

//    lineEdit1->setText("Tim");
//    lineEdit2->setText("2002");
//    lineEdit3->setText("tim tim@mail.ru");

//    QTest::mouseClick(button, Qt::LeftButton);

//    QVERIFY(label->text() == "fine");
//}

void Test::edit() {
    MainWindow window;
    QLineEdit* lineEdit1 = window.findChild<QLineEdit*>("nameField");
    QTest::keyClicks(lineEdit1, "tim");
    QVERIFY(lineEdit1->isModified());
}

QTEST_MAIN(Test)
