TEMPLATE = lib
CONFIG += plugin
CONFIG += release

TARGET = plugin

DEPENDPATH += .
DEPENDPATH += ../../
INCLUDEPATH += .
INCLUDEPATH += ../../

# Input
HEADERS += src/schomeplugin.h \
	../../scplugininterface.h \
	../../scleftmenuplugininterface.h

SOURCES += src/schomeplugin.cpp
