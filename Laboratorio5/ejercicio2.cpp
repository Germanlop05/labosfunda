#include <iostream>
using  namespace std;
int main (){
    int h,m,s;
    cout<<"\nintroduzca la hora: ";
    cin>>h;
    cout<<"\nintroduzca los minutos: ";
    cin>>m;
    cout<<"\nintroduzca los segundos: ";
    cin>>s;

    if (h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59){
        s++;
        if(s==60){
            s=0;
            m++;
            if(m==60){
                m=0;
                h++;
                if(h==24)
                h=0;
            }
        }cout<<"\n su hora un segundo despues es: "<<h<<":"<<m<<":"<<s;
    }else 
    cout<<"SU HORA INGRESADA ES INCORRECTA..";
return 0;
}
 