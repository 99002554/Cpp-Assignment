#include <iostream>
#include "gcomplex.h"
using namespace std;

template<typename T>
Complex<T>::Complex():
    m_real(0), m_image(0) {}
template<typename T>
Complex<T>::Complex(T r,T i):
    m_real(r), m_image(i) {}
template<typename T>
void Complex<T>::display() {
    cout<<"Real: "<<m_real<<" , Imaginary: "<<m_image<<endl;
}

int main() {
    Complex<int>c;
    Complex<int>c1(5, 6);
    c.display();
    c1.display();
    return 0;
}
