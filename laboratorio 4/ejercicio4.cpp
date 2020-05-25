#include <iostream>
#include <string>
using namespace std;

int main()
{
 string palabra;

cout<<"ingrese palabra: ";
cin>>palabra;

int longitud= palabra.length();

cout<<palabra<<" tiene una longitud de "<<longitud<<" caracteres"<<endl;

if (longitud>10){
cout<<palabra<< " tiene mas de 10 caracteres, "<<" tiene "<<longitud<<endl;
}
else if (longitud<10){
    cout<<palabra<<"  tiene menos de 10 caracteres, "<< " tiene "<<longitud<<endl;
}
else if (longitud==10){
    cout<<palabra<<" es igual a 10 caracteres, "<< " tiene " <<longitud<<endl;
}
if (longitud%2==0){
    cout<<palabra<<" tiene longitud par"<<endl;
} else{
    cout<<palabra<<" tiene longitud impar"<<endl;
}

return 0;
}