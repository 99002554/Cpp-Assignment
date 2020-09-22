#include <iostream>
#include "gpoint.h"
#include <math.h>
using namespace std;

template<typename T>
Point<T>::Point():
    m_x{0}, m_y{0} {}

template<typename T>
Point<T>::Point(T x, T y):
    m_x{x}, m_y{y} {}

template<typename T>
void Point<T>::distanceFromOrigin() {
    int res = (sqrt(m_x*m_x + m_y*m_y));
    cout<<"Distance from origin: "<<res<<endl;
}
template<typename T>
Quadrant Point<T>::quadrant() {
    if (m_x>0 && m_y>0) {
        cout<<"First quadrant"<<endl;
        return Q1;
    }
    if (m_x<0 && m_y>0) {
        cout<<"Second quadrant"<<endl;
        return Q2;
    }
    if (m_x<0 && m_y<0) {
        cout<<"Third quadrant"<<endl;
        return Q3;
    }
    cout<<"Fourth quadrant"<<endl;
    return Q4;
}
template<typename T>
void Point<T>::display() {
    cout<<m_x<<", "<<m_y<<endl;
}

int main() {
    Point<int> p(1, -3);
    p.display();
    p.distanceFromOrigin();
    p.quadrant();
    return 0;
}
