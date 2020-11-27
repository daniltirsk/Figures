#pragma once

#ifndef FIGURE_H
#define FIGURE_H


#include <string>
using namespace std;

class Figure {

public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual string returnType() = 0;
};

#endif