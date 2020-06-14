#include <iostream>
using namespace std;

bool esbisiesto(int);
 
  int main(){
 int anio=0;
 cout<<"ingrese el anio: ";
 cin>>anio;
 if(esbisiesto(anio)){
 cout<<"el anio es bisiesto. "<<endl;
 }else 
 cout<<"el anio no es bisiesto. "<<endl;

     return 0;
 }

 bool esbisiesto(int anio){
 if(!(anio%400)|| (!(anio%4)&& anio%100))
 return true;
 else 
 return false;
 }