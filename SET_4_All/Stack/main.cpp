#include <iostream>
#include "gstack.h"

using namespace std;
template<typename T>
MyStack<T>::MyStack(){}

template<typename T>
MyStack<T>::MyStack(int l){
    //m_arr = T[l];
	m_maxlen = l;
	m_top = -1;}

template<typename T>
void MyStack<T>::push(T val)
{
    if(isFull())
    {
        cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
    }
    cout << "Inserting " << val << endl;
	m_arr[++m_top] = val;
}
template<typename T>
T MyStack<T>::pop()
{
    if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}
	cout << "Removing " << peek() << endl;

	return m_arr[m_top--];
}
template<typename T>
T MyStack<T>::peek() const
{
	if (!isEmpty())
		return m_arr[m_top];
	else
		exit(EXIT_FAILURE);
}
template<typename T>

template<typename T>
bool MyStack<T>::isEmpty() const
{
	return m_top==-1;	// or return size() == 0;
}
template<typename T>
bool MyStack<T>::isFull() const
{
	return m_top == m_maxlen - 1;	// or return size() == capacity;
}
int main()
{
    MyStack <string> pt(2);

	pt.push("A");
	pt.push("B");

	pt.pop();
	pt.pop();

	pt.push("C");
	cout << "Top element is: " << pt.peek() << endl;
	//cout << "Stack size is " << pt.m_top + 1 << endl;
    if (pt.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";

    return 0;
}
