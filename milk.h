#ifndef MILK_H
#define MILK_H

#include "condimentdecorator.h"
#include "beverage.h"
#include <QString>

class Milk : public CondimentDecorator {
public:
    Beverage* beverage;
    Milk(Beverage* beverage);
    QString getDescription;
    double cost();
};

#endif // MILK_H
