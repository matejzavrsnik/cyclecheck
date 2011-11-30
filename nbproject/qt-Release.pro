# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux-x86
TARGET = cyclecheck
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
QT = core gui
SOURCES += main.cpp algorithms/linked_list_cycle.cpp frmHelp.cpp algorithms/linked_list.cpp frmMain.cpp
HEADERS += frmMain.h algorithms/stopwatch.h algorithms/linked_list_cycle.h algorithms/linked_list.h frmHelp.h
FORMS += frmMain.ui frmHelp.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
