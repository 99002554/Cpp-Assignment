#include<iostream>
#include"Ipaddress.h"

IPAddress::IPAddress():
    ipval("127.0.0.0"){}

IPAddress::IPAddress(int x,int y,int z,int w):
     ipval(std::to_string(x)+"."+std::to_string(y)+"."+std::to_string(z)+"."+std::to_string(w)){
         cout<<"IPADDRESS IS : "<<ipval<<"\n";
      }


bool IPAddress::isLoopBack()
{
    if(ipval=="127.0.0.0")
    {
        cout<<"\n";
        cout<<"It is loopback add \n";
    }
    else{
        cout<<"Is not loopback add"<<"\n";
    }
}
string IPAddress::getIPClass()
{
    IPClass dir;
   dir = Class_A;
    int i=0;
    std::string con="";
   while(ipval[i]!='.')
    {
        con[i]=con[i]+ipval[i];
        i=i+1;
    }
    int val=stoi(con);
    /*Class A: 0 - 127 Class B: 128 - 191 Class C: 192 - 223 Class D: 224 - 239 Class E: 240 - 255 */
    if(val>=0 && val<=127)
    {
        cout<<"\n"<<"Class A";
    }
    else if(val>=128 && val<=191)
    {
        cout<<"\n"<<"Class B";
    }
    else if(val>=192&& val<=223)
    {
        cout<<"\n"<<"Class C";
    }
    else if(val>=224 && val<=239)
    {
        cout<<"\n"<<"Class D";
    }
    else if(val>=240 && val<=225)
    {
        cout<<"\n"<<"Class E";
    }
}

void IPAddress:: display()
{
    cout<<"\n"<<ipval;
}
int main()
{
    IPAddress a1(127,0,0,0);
    a1.isLoopBack();
    a1.getIPClass();
    a1.display();
    return 0;
}
