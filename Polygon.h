#pragma once

#ifndef POLYGON_H
#define POLYGON_H

#include <string>
using namespace std;
#include "Figure.h"
#include "Dot.h"



class Polygon : public Figure
{
private:
    Dot* arr = nullptr;
    int n = 0;
public:
    Polygon();

    Polygon(int inN, Dot* inArr);

    double getArea();

    double getPerimeter();

    string returnType();

};

#endif
