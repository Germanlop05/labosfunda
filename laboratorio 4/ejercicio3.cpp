#include <iostream>
using namespace std;

int main()
{
int numero;
 cout<<"Ingresa un numero:";
 cin>>numero;

 if(numero==0){
 cout<<"su numero "<<numero<<" es igual a cero"<<endl;
 }
 else if (numero>0)
 {
    cout<<"su numero "<<numero<< " es positivo"<<endl;
 }else if (numero<0)
 {
     cout<<"su numero "<<numero<<" es negativo"<<endl;
 }
return 0;
}