#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palabra;
    
cout<<"ingrese la palabra:";
cin>>palabra;

int longitud= palabra.length();

if(palabra[0]==palabra[longitud-1]){
cout<<"sus letras son iguales "<<endl;
}
else {
cout<<"sus letras no son iguales"<<endl;
}

return 0;
}