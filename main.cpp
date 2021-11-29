#include <QCoreApplication>
#include <iostream>
#include "beverage.h"
#include "condimentdecorator.h"
#include "houseblend.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Beverage *beverage1 = new HouseBlend();
    cout <<beverage1->getDescription().toStdString()
        <<"$" <<beverage1->cost() <<endl;

    return a.exec();
}
