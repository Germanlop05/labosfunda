#include <iostream>
 
using namespace std;
 
const int sz = 25;
 
float mayor( const float v[] );
float menor( const float v[] );
void imprimir( const float v[] );
 
int main()
{
   float array[sz];
   float suma = 0.0;
 
    cout << "\nAltura de los estudiantes:\n";
    for( int i = 0; i < sz; i++ ) {
        cout << "(" << i + 1 << "/" << sz << "): ";
        cin >> array[i];
        suma += array[i];
    }
 
   
 
    cout << "\nEstatura mayor: " << mayor(array) << endl;
    cout << "Estatura menor: " << menor(array) << endl;
    cout << "Promedio: " << suma / sz << endl;
 
    return 0;
}
 

 
float mayor( const float v[] )
{
    float max;
 
    for( int i = 0; i < sz; i++ )
        if( i == 0 || v[i] > max )
            max = v[i];
 
    return max;
}
 
float menor( const float v[] )
{
    float min;
 
    for( int i = 0; i < sz; i++ )
        if( i == 0 || v[i] < min )
            min = v[i];
 
    return min;
}
 
void imprimir( const float v[] )
{
    for( int i = 0; i < sz; i++ )
        cout << v[i] << " ";
 
    cout << endl;
}