#include "Circle.h"

Circle::Circle() {
    rad = 0;
}

Circle::Circle(double r) {
    rad = r;
}

double Circle::getArea() {
    return rad * rad * M_PI;
}

double Circle::getPerimeter() {
    return 2 * M_PI * rad;
}

string  Circle::returnType() {
    return "Circle";
}