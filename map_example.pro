TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    city.cpp \
    map.cpp

HEADERS += \
    city.h \
    map.h \
    mapexceptions.h
