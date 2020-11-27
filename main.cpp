#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <fstream>
#include <vector>

#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Dot.h"
#include "Polygon.h"

using namespace std;

int main()
{/*
    string line;
    ifstream myfile("text.txt");
    int n;
    myfile >> n;
    int x, y;
    Dot* dots = new Dot[n];
    if (myfile.is_open())
    {
        int i = 0;
        while (i<n)
        {
            myfile >> x;
            myfile >> y;
            dots[i] = Dot(x,y);
            i++;
        }
        myfile.close();
    }

    Polygon p(n, dots);
    cout << p.getArea() << endl;
    cout << p.getPerimeter() << endl;
    
    delete[] dots;*/


    vector<Figure*> figs;
    Rectangle* r1 = new Rectangle(2, 2);
    Circle* c1 = new Circle(1);
    Dot d1(0, 0), d2(0, 3), d3(4, 0);
    Triangle* t1 = new Triangle(d1,d2,d3);
    figs.push_back(r1);
    figs.push_back(c1);
    figs.push_back(t1);

    double area = 0;
    for (int i = 0; i < figs.size(); i++)
    {
        area += figs[i]->getArea();
    }

    cout << area << endl;

    return 0;
}