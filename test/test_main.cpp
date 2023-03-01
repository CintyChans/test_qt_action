#include <QTest>
#include <QObject>
class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
};
void TestQString::toUpper()
{
    QString str = "Hello";
    QVERIFY(str.toUpper() == "HELLO");
}
QTEST_MAIN(TestQString)
