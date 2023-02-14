#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class labelappTest : public QObject
{
    Q_OBJECT

public:
    labelappTest();
    ~labelappTest();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

labelappTest::labelappTest()
{

}

labelappTest::~labelappTest()
{

}

void labelappTest::initTestCase()
{

}

void labelappTest::cleanupTestCase()
{

}

void labelappTest::test_case1()
{

}

QTEST_MAIN(labelappTest)

//#include "tst_labelapptest.moc"
