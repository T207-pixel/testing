/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QLabel *label3;
    QLineEdit *nameField;
    QLabel *label;
    QLineEdit *yearField;
    QLineEdit *emailField;
    QLabel *label1;
    QLabel *label2;
    QLabel *statusLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(677, 579);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 170, 391, 221));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 4, 0, 1, 2);

        label3 = new QLabel(layoutWidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label3, 3, 0, 1, 1);

        nameField = new QLineEdit(layoutWidget);
        nameField->setObjectName(QString::fromUtf8("nameField"));

        gridLayout_2->addWidget(nameField, 1, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        yearField = new QLineEdit(layoutWidget);
        yearField->setObjectName(QString::fromUtf8("yearField"));

        gridLayout_2->addWidget(yearField, 2, 1, 1, 1);

        emailField = new QLineEdit(layoutWidget);
        emailField->setObjectName(QString::fromUtf8("emailField"));

        gridLayout_2->addWidget(emailField, 3, 1, 1, 1);

        label1 = new QLabel(layoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label1, 1, 0, 1, 1);

        label2 = new QLabel(layoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label2, 2, 0, 1, 1);

        statusLabel = new QLabel(layoutWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(statusLabel, 5, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 677, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QFont font;
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        statusbar->setFont(font);
        statusbar->setAutoFillBackground(false);
        statusbar->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Send form", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "Email ->", nullptr));
        nameField->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Please fill that form", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Username ->", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "Birthyear ->", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
