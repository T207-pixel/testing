TEMPLATE = app

# CONFIG определения
CONFIG += qt
CONFIG += console
CONFIG += warn_on
CONFIG += testcase
CONFIG += c++11

# Определения QT
QT += widgets core gui testlib
QT += testlib
QT += testlib gui

# Целевой исполняемый файл
TARGET = tester


# Исходные файлы
SOURCES += \
    test.cpp \
    ../testProject/mainwindow.cpp \
    ../testProject/person.cpp

# Заголовочные файлы
HEADERS += \
    test.h \
    ../testProject/mainwindow.h \
    ../testProject/person.h

# Формы
FORMS += \
    ../testProject/mainwindow.ui

# Ресурсы (если в вашем проекте используются файлы ресурсов, не забудьте включить их сюда)
#RESOURCES += \
#    ../testProject/myresources.qrc

# Если в вашем проекте есть дополнительные файлы, вам нужно их включить здесь
#OTHER_FILES += \
#    ...

# Включение путей к библиотекам (если они есть)
#LIBS += \
#   ...

# Включение путей к заголовочным файлам
#INCLUDEPATH += \
#    ...

