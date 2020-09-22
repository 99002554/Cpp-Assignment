#include <iostream>
using namespace std;

class point
{
    int m_x;
    int m_y;
public:
    point();
    point(int,int);
    point(const point &);
    distancefromorigin();
    isorigin();
    isonxaxis();
    isonyaxis();
    display();
    quadrant();
};
