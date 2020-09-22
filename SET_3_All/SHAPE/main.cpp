#include <iostream>
#include "triangle.h"
#include "shape.h"
#include "rectangle.h"
#include "polygon.h"
#include "circle.h"
#include <cmath>

using namespace std;

//Polygon::Polygon():IShape(){}

Polygon::Polygon(int n):m_sides(n){}

Triangle::Triangle(int x,int y,int z):Polygon(3),m_a(x),m_b(y),m_c(z){}

double Triangle::area()
{
    int a=0.5*(m_a+m_b+m_c);
    double area=sqrt(a*(a-m_a)*(a-m_b)*(a-m_c));
    return area;
}

double Triangle::circumference()
{
    return (m_a+m_b+m_c);
}

Rectangle::Rectangle(int x,int y):Polygon(4),m_length(x),m_breadth(y){}

double Rectangle::area()
{
    double area=m_length*m_breadth;
    return area;
}

double Rectangle::circumference()
{
    return (2*(m_length+m_breadth));
}

Circle::Circle(int r):m_radius(r) {}

double Circle::area()
{
    double area=2*PI*m_radius*m_radius;
    return area;
}

double Circle::circumference()
{
    return (2*PI*m_radius);
}


int main()
{
    Triangle t1(5, 4, 3);

    cout<<t1.area() << " &" << t1.circumference()<<endl;
    Rectangle t2(4,8);
    cout<<t2.area() << " &" << t2.circumference()<<endl;
    Circle t3(8);
    cout<<t3.area() << " &" << t3.circumference()<<endl;

    return 0;
}
