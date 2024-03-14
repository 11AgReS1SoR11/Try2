# Проект для сборки двух исполняемых файлов

TEMPLATE = app

# Второй исполняемый файл из main.cpp
TARGET = MainApp
CONFIG += qt
QT += widgets
SOURCES += \
    main.cpp