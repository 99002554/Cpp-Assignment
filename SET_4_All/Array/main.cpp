#include <iostream>
#include"garray.h"
#include<assert.h>

using namespace std;
template<typename T>
MyArray<T>::MyArray():
    m_arr(nullptr),m_len(0) {}

template<typename T>
MyArray<T>::MyArray(int len): m_len(len) {
    assert(m_len >0);
    m_arr = new T [m_len] {};
    for (int i = 0; i < m_len; i++)
        cin >> m_arr[i];
}

template<typename T>
MyArray<T>::~MyArray() {
    delete [] m_arr;
}

template<typename T>
void MyArray<T>::append(T val) {

    m_arr[m_len] = val;
    m_len++;
    for (int i = 0; i < m_len; i++)
        cout << m_arr[i]<<" ";
}
template<typename T>
T MyArray<T>::at(int index) {
    assert(index >= 0 && index < m_len);
    return m_arr[index];
}
template<typename T>
bool MyArray<T>::search(T key) const {
    for (int i = 0; i<m_len; i++) {
        if(m_arr[i]==key)
            return true;
    }
    return false;
}
template<typename T>
T MyArray<T>::sum() const {
    int sum = 0;
    for (int i = 0; i<m_len; i++) {
        sum += m_arr[i];
    }
    return sum;
}

template<typename T>
T MyArray<T>::max() const {
    int max = m_arr[0];
    for (int i = 1; i<m_len; i++) {
        if (m_arr[i] > max) {
            max = m_arr[i];
        }
    }
    return max;
}
template<typename T>
T MyArray<T>::min() const {
    int min = m_arr[0];
    for (int i = 1; i<m_len; i++) {
        if (m_arr[i] < min) {
            min = m_arr[i];
        }
    }
    return min;
}
template<typename T>
void MyArray<T>::reverse() {
    int start = 0, end = m_len-1;
    while (start < end) {
        int temp = m_arr[start];
        m_arr[start]=m_arr[end];
        m_arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < m_len; i++)
        cout << m_arr[i]<<" ";
}
template<typename T>
void MyArray<T>::sort() {
    for (int i=0; i<m_len; i++) {
        for (int j=i+1; j<m_len; j++) {
            if (m_arr[i]>m_arr[j]) {
                int temp = m_arr[i];
                m_arr[i] = m_arr[j];
                m_arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < m_len; i++)
        cout << m_arr[i]<<" ";
}
int main() {
    cout<<"Enter values\n";
    MyArray<int> a1;
    MyArray<int> a2(5);
    cout<<"\n\nAppend value: ";
    a2.append(12);

    cout<<"\n\nvalue at this index: \n"<<a2.at(0)<<endl;
    cout<<"\n\nsearching value"<<a2.search(2)<<endl;
    cout<<"\n\n summing array"<<a2.sum()<<endl;
    cout<<"\n\nmax element"<<a2.max()<<endl;
    cout<<"\n\nmin element"<<a2.min()<<endl;
    cout<<"\n\nsorting array";
    a2.sort();
    cout<<endl;
    cout<<"\n\nreversing array";
    a2.reverse();
    return 0;
}
