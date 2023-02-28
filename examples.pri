INCLUDEPATH += ../../../include

LIBS += -L$$OUT_PWD/../../../lib

TEMPLATE = app

QT += datavisualization

contains(TARGET, qml.*) {
    QT += qml quick
}

target.path = $$[QT_INSTALL_EXAMPLES]/datavisualization/$$TARGET
<<<<<<< HEAD
INSTALLS += target
=======
INSTALLS += target
>>>>>>> ea9c281f479e2990937eaeb910dc3e7bce589507
