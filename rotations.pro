android|ios|winrt {
    error( "This example is not supported for android, ios, or winrt." )
}


QT += datavisualization

SOURCES += main.cpp scatterdatamodifier.cpp
HEADERS += scatterdatamodifier.h

QT += widgets


RESOURCES += rotations.qrc
