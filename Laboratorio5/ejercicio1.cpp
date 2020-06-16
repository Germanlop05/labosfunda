#include <iostream>
using namespace std;
int mcd (int a, int b ){
    int resul=1;
    for(int i=1; i<=a; i++){
        if((a%i==0)&&(b%i==0)){
            resul=i;
        }
    }return resul;
}

int main(){
int a, b;
cout<<"\nIntroduzca el primer numero: ";
cin>>a;
cout<<"\nIntroduzca el segundo numero: ";
cin>>b;

int resul=mcd(a,b);
cout<<"\nel maximo comun divisor de "<< a <<" y "<< b <<" es: "<<resul<<endl;
return 0;
}
