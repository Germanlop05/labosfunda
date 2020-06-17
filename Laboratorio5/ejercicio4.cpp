#include <iostream>

using namespace std;

int main(){
int d,m,anio;

cout<<"\nIngrese el dia: ";
cin>>d;
cout<<"\nIngrese el mes: ";
cin>>m;
cout<<"\nIngresa el anio: ";
cin>>anio;
if(anio>=0 && anio<=2020 && m>=0 && m<=12 && d>=0 && d<=31)
d++;
if(anio==2020){
    
}

return 0;
}