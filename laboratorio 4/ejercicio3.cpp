#include <iostream>
using namespace std;

int main()
{
int numero;
 cout<<"Ingresa un numero:";
 cin>>numero;

 if(numero==0){
 cout<<"su numero es igual a cero";
 }
 else if (numero>0)
 {
    cout<<"su numero es positivo";
 }else if (numero<0)
 {
     cout<<"su numero es negativo";
 }
return 0;
}