#include <QtTest/QtTest>

class TestExample : public QObject
{
    Q_OBJECT
private slots:
    void test_case1();
    void test_case2();
};

void TestExample::test_case1()
{
    QVERIFY(1 == 1);
}

void TestExample::test_case2()
{
    QVERIFY(2 == 2);
}

QTEST_MAIN(TestExample)
#include "test.moc"