#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
using namespace std;
#include "Figure.h"



class Rectangle : public Figure {
private:
    double width = 0.0;
    double height = 0.0;
public:
    Rectangle();

    Rectangle(double w, double h);

    double getArea();

    double getPerimeter();

    string returnType();
};

#endif
