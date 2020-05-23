#include <iostream>
 using namespace std;

 int main()

 {
int divisor, dividendo;
cout<<"ingrese el valor  del divisor:";
cin>>divisor;

cout<<"ingrese el valor del dividendo: ";
cin>>dividendo;

if(divisor%dividendo==0)
{
    cout<<"su numero es divisible";
}else
{
 cout<<"su numero no es divisible";
}
return 0;
 }