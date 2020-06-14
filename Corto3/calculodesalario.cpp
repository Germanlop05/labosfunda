#include <iostream>
using namespace std;
float calculoSalario(int, int);
float calculoSalarioReal(float);
struct empleado{
    float salario=0;
    float salarioReal=0;
};
int main()
{
    int n = 0;
    int cantidadHoras = 0;
    int cantidadHorasExtra = 0;
    float descuento = 0;
    cout<<"Ingrese cantidad de empleados: ";
    cin>>n;
    empleado empleados[n];
    for (int i = 0; i < n; i++) {
        descuento = 0;
        cout<<"\nIngrese horas del empleado " << i + 1<<" : ";
        cin>> cantidadHoras;
        cout<<"Ingrese horas extra del empleado " << i + 1<<" : ";
        cin>> cantidadHorasExtra;
        empleados[i].salario = calculoSalario(cantidadHoras,cantidadHorasExtra);
        empleados[i].salarioReal = calculoSalarioReal(empleados[i].salario);
        cout <<"Salario: $"<<empleados[i].salario<<endl;
        cout <<"Salario real: $"<<empleados[i].salarioReal<<endl;
        
    }
    return 0;
}

float calculoSalario(int horas, int horasExtra){
    float salario = 1.75 * horas + 2.50 * horasExtra;
    return salario;
}
float calculoSalarioReal(float salario){
    float descuento = 0;
    descuento = salario * 0.1025;
    if(salario > 500)
        descuento += salario * 0.10;
        return (salario - descuento);
}

