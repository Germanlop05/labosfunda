#include <iostream>
using namespace std;

void leerarreglo(int arr[], int n){
    for( int i=0; i < n; i++){
        cout<<"ingrese el numero "<<n<<endl;
        cin>>arr[i];
    }
}
void sumaarreglos(int arr1[], int arr2[], int n, int resultante[]){
for(int i=0; i<n; i++){
    resultante[i]= arr1[i]+arr2[i];
}
}
void resultado(int resultante[], int n){
    for (int i=0; i<n; i++){
        cout<<resultante[1]<<endl;
    }
}

int main(){
    int n= 5;
    int arr1[n];
    int arr2[n];
    int resultante[n];
    leerarreglo(arr1, n);
    leerarreglo(arr2,n);
    sumaarreglos(arr1,arr2,n,resultante);
    resultado(resultante,n);

}