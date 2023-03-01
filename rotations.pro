android|ios|winrt {
    error( "This example is not supported for android, ios, or winrt." )
}



SOURCES += main.cpp scatterdatamodifier.cpp
HEADERS += scatterdatamodifier.h

QT += widgets
QT += datavisualization

RESOURCES += rotations.qrc
