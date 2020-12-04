#pragma once

#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#include "Figure.h"


class Circle : public Figure {
private:
    double rad=0.0;
public:
    Circle();

    Circle(double r);

    double getArea();

    double getPerimeter();

    string returnType();
};

#endif
