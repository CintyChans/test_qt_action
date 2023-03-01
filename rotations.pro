android|ios|winrt {
    error( "This example is not supported for android, ios, or winrt." )
}

TEMPLATE = subdir
QT += widgets datavisualization 

SOURCES += main.cpp scatterdatamodifier.cpp 
HEADERS += scatterdatamodifier.h

RESOURCES += rotations.qrc

SUBDIRS += $$PWD/test/testqstring.pro
