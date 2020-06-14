 #include <iostream>
 #include <stdlib.h>
 #include <time.h>
 using namespace std;

bool numagic(int);

 int main(){
 srand(time(NULL));
 if (numagic(1+ rand()%(100)))
 cout<<"\nAdivinaste el numero secreto yeiih. ";
 else 
 cout<<"\nvuelva a intentarlo";

     return 0;
 }
 
 bool numagic (int numagic){
     int intentos=5, numero=0;
  while (intentos-- && numagic != numero){
cout<<"\nIngrese el numero: ";
cin>>numero;
if(numagic != numero){
    if(numero > numagic)
    cout<<"Numero ingresado es mayor a numero secreto. ";
    else 
    cout<<"Numero ingresado es menor a numero secreto. "<<endl;

    cout<<"\nIntentos restantes: "<<intentos<<endl;
     } else 
     return true;
  }return false;
 
 }