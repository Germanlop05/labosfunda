#include <iostream>
using namespace std;

const int longCad=20;
struct
{char nombreArticulo [longCad + 1][30];
int cantidad[50];
float precio[30];
float costoArticulo[30];
}proyecto;

int main(){           // main para reolver cada funcion
    int articulos=0;
    cout<<" Cantidad de articulos (30 max): "<<endl;
    cin>>articulos;
    informacion(articulos);
    precio(articulos);
    resultado(articulos);
    resultadototal(articulos);
}

void informacion(int articulos){                       //funcion para pedirle los datos de cada procuto
    cout<<"\tInformacion de los productos "<<endl;
    for(int i = 0; i < articulos; i++)
    {
        cout<<"Ingrese el nombre  del articulo: "<< i+1<<":";
        cin>>proyecto.nombreArticulo[i];
        cout<<"Ingrese la cantidad de articulos: ";
        cin>>proyecto.cantidad[i];
        cout<<"Ingrese el precio por unidad de sus articulos: $ ";
        cin>>proyecto.costoArticulo[i];
    }
    return;
}

void precio (int articulos ){                      //funcion para hacer el calculo de los productos que lleva
    for(int i = 0; i < articulos; i++)
    {
        proyecto.precio[i]=proyecto.costoArticulo[i]*proyecto.cantidad[i];
    }
    return;
}
void resultado(int articulos){                             //funcion para darle el resultado de cada producto
    cout<<"\tResultado de los produtos "<<endl;
    for(int i=0; i < articulos; i++){
        cout<<"productos: " <<proyecto.nombreArticulo[i]<<endl;
        cout<<"cantidad: " <<proyecto.cantidad[i]<<endl;
        cout<<"Costo por articulo: " <<proyecto.costoArticulo[i];
        cout<<"Precio final del producto: " <<proyecto.precio[i];
    }
    return;
}
void resultadototal (int articulos ){                      // funcion para la entrega final del producto
    cout<<"Total de tu cuenta "<<endl;
    float total;
    for( int i =0; i<articulos;i++){
        total+=proyecto.precio[i];
    }
    cout<<"\tEl total de tu cuenta es: $ "<<total;
    return;
}
