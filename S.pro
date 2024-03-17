# Проект для сборки двух исполняемых файлов
QT += quick location widgets network webenginewidgets

TEMPLATE = app

# Второй исполняемый файл из main.cpp
TARGET = MainApp
CONFIG += qt
QT += widgets
SOURCES += \
    main.cpp