#pragma once

#ifndef DOT_H
#define DOT_H

using namespace std;
#include "Figure.h"

class Dot {
private:

public:
    double x = 0.0, y = 0.0;

    Dot();

    Dot(double inX, double inY);
};

#endif