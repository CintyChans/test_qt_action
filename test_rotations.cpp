
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

    QWidget *widget = new QWidget;
    QHBoxLayout *hLayout = new QHBoxLayout(widget);
    hLayout->addWidget(container, 1);
    QPushButton *toggleSunButton = new QPushButton(widget);
    hLayout->addWidget(toggleSunButton);
    ScatterDataModifier *modifier = new ScatterDataModifier(graph);
    QObject::connect(toggleSunButton, &QPushButton::clicked, modifier,
                     &ScatterDataModifier::toggleSun);

    QTest::mouseClick(widget, Qt::LeftButton, Qt::NoModifier, QPoint(0, 0));

}

QTEST_MAIN(TestRotations)
#include "test_rotations.moc"
