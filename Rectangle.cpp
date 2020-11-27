#include "Rectangle.h"

Rectangle::Rectangle() {}

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

double Rectangle::getArea() {
    return width * height;
}

double Rectangle::getPerimeter() {
    return (width + height) * 2;
}

string Rectangle::returnType() {
    return "Rectangle";
}