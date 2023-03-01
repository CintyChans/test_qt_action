android|ios|winrt {
    error( "This example is not supported for android, ios, or winrt." )
}


QT += widgets datavisualization testlib

SOURCES += main.cpp scatterdatamodifier.cpp
HEADERS += scatterdatamodifier.h

RESOURCES += rotations.qrc
