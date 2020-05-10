#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float r,pi=3.14,p,a;
    cout<<"introduce el radio del circulo:";cin>>r;
    a= pow(r,2)*pi;
    p= 2*pi*r;
    cout<<"el area del circulo es:"<<a<<endl;
    cout<<"el perimetro del circulo es:"<<p<<endl;

    return 0;
}