#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
 
 float a,b,c,resultado= 0;

 cout<<"digite el valor de a:"; cin>>a;
 cout<<"dgite el valor de b:"; cin>>b;
 cout<<"digite el valor de c:"; cin>>c;

 float x1, x2;
  
  x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);

  x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);

 cout<<"x1="<<x1<<endl;
 cout<<"x2="<<x2<<endl;

    return 0;
}
