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

    virtual double getArea();

    virtual double getPerimeter();

    virtual string returnType();
};

#endif