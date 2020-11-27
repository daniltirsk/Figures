#include "Triangle.h"

Triangle::Triangle(Dot d1, Dot d2, Dot d3) {
    dot1 = d1;
    dot2 = d2;
    dot3 = d3;
}

double Triangle::getArea() {
    double area;
    area = 0.5 * (dot1.x * (dot2.y - dot3.y) + dot2.x * (dot3.y - dot1.y) + dot3.x * (dot1.y - dot2.y));
    return abs(area);
}

double Triangle::getPerimeter() {
    double p1, p2, p3;
    p1 = sqrt((dot1.x - dot2.x) * (dot1.x - dot2.x) + (dot1.y - dot2.y) * (dot1.y - dot2.y));
    p2 = sqrt((dot2.x - dot3.x) * (dot2.x - dot3.x) + (dot2.y - dot3.y) * (dot2.y - dot3.y));
    p3 = sqrt((dot3.x - dot1.x) * (dot3.x - dot1.x) + (dot3.y - dot1.y) * (dot3.y - dot1.y));
    return p1 + p2 + p3;
}

string Triangle::returnType() {
    return "Triangle";
}