
#include <QTest>
#include "scatterdatamodifier.h"
#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtGui/QScreen>

class TestRotations: public QObject
{
    Q_OBJECT
private slots:
    void toggleSunButton();
};

void TestRotations::toggleSunButton()
{
    
    Q3DScatter *graph = new Q3DScatter();
    QWidget *container = QWidget::createWindowContainer(graph);

    if (!graph->hasContext())
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't initialize the OpenGL context.");
        msgBox.exec();
        return -1;
    }

    QWidget *widget = new QWidget;
    QHBoxLayout *hLayout = new QHBoxLayout(widget);
    hLayout->addWidget(container, 1);
    QPushButton *toggleSunButton = new QPushButton(widget);
    hLayout->addWidget(toggleSunButton);
    ScatterDataModifier *modifier = new ScatterDataModifier(graph);
    QObject::connect(toggleSunButton, &QPushButton::clicked, modifier,
                     &ScatterDataModifier::toggleSun);



}

QTEST_MAIN(TestRotations)
#include "test_rotations.moc"
