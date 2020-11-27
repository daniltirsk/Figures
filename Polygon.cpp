#include "Polygon.h"

Polygon::Polygon() {}

Polygon::Polygon(int inN, Dot* inArr) {
    n = inN;
    arr = inArr;
}

double Polygon::getArea() {
    double area = 0;

    int j = n - 1;
    for (int i = 0; i < n; i++) {
        area += (arr[j].x + arr[i].x) * (arr[j].y - arr[i].y);
        j = i;
    }

    return abs(area / 2);
}

double Polygon::getPerimeter() {
    double p = 0.0;
    for (int i = 0; i < n - 1; i++) {
        p += sqrt((arr[i + 1].x - arr[i].x) * (arr[i + 1].x - arr[i].x) + (arr[i + 1].y - arr[i].y) * (arr[i + 1].y - arr[i].y));
    }
    p += sqrt((arr[n - 1].x - arr[0].x) * (arr[n - 1].x - arr[0].x) + (arr[n - 1].y - arr[0].y) * (arr[n - 1].y - arr[0].y));
    return p;
}

string Polygon::returnType() {
    return "Polygon";
}