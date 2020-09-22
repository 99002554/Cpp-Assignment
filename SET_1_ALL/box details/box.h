#include <iostream>
using namespace std;
class Box
{
    int m_length;
    int m_height;
    int m_breadth;
public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
    int length();
    int breadth();
    int height();
    int volume();
    void display();
};
