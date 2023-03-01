android|ios|winrt {
    error( "This example is not supported for android, ios, or winrt." )
}

INCLUDEPATH += ../../../include

LIBS += -L$$OUT_PWD/../../../lib

TEMPLATE = app

QT += datavisualization

contains(TARGET, qml.*) {
    QT += qml quick
}

target.path = $$[QT_INSTALL_EXAMPLES]/datavisualization/$$TARGET
INSTALLS += target
SOURCES += main.cpp scatterdatamodifier.cpp
HEADERS += scatterdatamodifier.h

QT += widgets


RESOURCES += rotations.qrc
