#include <iostream>

using namespace std;

int main()
{
    string n;
    int c;
    float $,p;
    cout<<"producto:"; cin>>n;
    cout<<"cantidad de compra:"; cin>>c;
    cout<<"precio:$"; cin>>p;

    $= p * c; 

    cout<<"total gastado:$"<<$<<endl;

    return 0;
}