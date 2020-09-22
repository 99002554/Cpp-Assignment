#include <iostream>
#include <stdbool.h>
using namespace std;

enum IPClass { Class_A, Class_B, Class_C, Class_D, Class_E};

class IPAddress
{
private:
    string ipval;
public:
    IPAddress();
    IPAddress(int,int,int,int );
    IPAddresss(int);
    bool isLoopBack();
    string getIPClass();
    void display();
};

