#include <iostream>
#include "box.h"
using namespace std;
//Box
Box:: Box() :
    m_length(0), m_height(0), m_breadth(0) {
}
Box:: Box(int x, int y, int z) :
    m_length(x), m_height(y), m_breadth(z) {
}
Box:: Box(int v) :
    m_length(v){

}
Box::Box(const Box & ref) :
     m_length(ref.m_length), m_height(ref.m_height), m_breadth(ref.m_breadth){
}
int Box:: length() {
   return m_length;
}
int Box:: breadth() {
   return m_breadth;
}
int Box:: height() {
   return m_height;
}
int Box:: volume() {
    return (m_length*m_breadth*m_height);
}
void Box:: display(){
cout<<"The dimensions of the box are"<<m_length<<","<<m_breadth<<","<<m_height<<"\n";
}

//End of Box


