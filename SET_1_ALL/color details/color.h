#include <iostream>
using namespace std;
enum color_t(red, blue, green, black, yellow);
class Color
{
    int m_r;
    int m_g;
    int m_b;
public:
    Color();
    Color(int,int,int);
    Color(string);
    Color(color_t);
    void invert();
    void display();
};
