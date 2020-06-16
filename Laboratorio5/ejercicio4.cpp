#include <iostream>
using namespace std ;

int main(){
    int mayor, menor, residuo;
    cout<<"MCD DE DOS NUMEROS\n\n";
    cin>>mayor;
    cout<<"digite el numero mayor: "; 
    cin>>mayor;

    cout<<"digite el numero menor: ";
    cin>>menor;

    do{
        residuo=mayor%menor;
        if(residuo!=0){
            mayor=menor;
            menor=residuo;
        }
    }while(residuo !=0);
    cout<<"EL MCD es: "<<menor;
    cout<<endl;
    return 0;
}