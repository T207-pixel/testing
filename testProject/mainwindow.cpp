#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setFixedSize(677, 579);
}

MainWindow::~MainWindow() {
    delete ui;
}


int MainWindow::on_pushButton_clicked() {
    Person person;
    QString enteredName = ui->nameField->text();
    QString enteredYear = ui->yearField->text();
    QString enteredEmail = ui->emailField->text();

    person.setName(enteredName.toStdString());
    person.setBirthYear(enteredYear.toStdString());
    person.setEmail(enteredEmail.toStdString());

    if(person.validateName()) {
        if(person.validateYear()) {
            if(person.validateEmail()) {
                ui->statusbar->showMessage("Registretion succeeded!!!");
                ui->statusLabel->setText("fine");
                return 0;
            }
            else {
                ui->statusbar->showMessage("Wrong email format (name@email.com)!!!");
                ui->statusLabel->setText("fail");
                return -1;
            }
        } else {
            ui->statusbar->showMessage("Wrong year (year shouldn't be less 1900 and contains latin charecters)!!!");
            ui->statusLabel->setText("fail");
            return -2;
        }
    } else {
        ui->statusbar->showMessage("Wrong name (start with big letter, only latin charecters)!!!");
        ui->statusLabel->setText("fail");
        return -3;
    }

}

