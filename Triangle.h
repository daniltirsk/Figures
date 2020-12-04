#pragma once

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>
using namespace std;
#include "Figure.h"
#include "Dot.h"



class Triangle : public Figure
{
private:
    Dot dot1, dot2, dot3;
public:
    Triangle() {}

    Triangle(Dot d1, Dot d2, Dot d3);

    double getArea();

    double getPerimeter();

    string returnType();
};

#endif
