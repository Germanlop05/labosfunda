#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout<<"Ingrese un numero entero para verificar si es par o impar: ";
    cin>>numero;

    if(numero%2==0){
        cout<<"El numero es par";
    }
    else {
         cout<<"El numero es impar";
     }
}