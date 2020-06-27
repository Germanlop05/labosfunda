#include <iostream>
using namespace std;
 
int promedio(int n1, int n2, int n3, int n4, int n5);
 
struct seccion1{
	
	int nota1;
	int nota2;
	int nota3;
    int nota4;
    int nota5;
    bool estatus;
};
 
main(){
 
	struct seccion1 estudiantescuc[100];
 
	int i,n,aprobados=0,reprobados=0, promedio;
    cout<<"Indique la cantidad de estudiantes a promediar: "<<endl;
    cin>>n;
 	
 
	for (i=1; i<=n; i++){
	
	    cout<<"Indique la nota 1: ";
		cin>>estudiantescuc[i].nota1;
		cout<<"Indique la nota 2: ";
		cin>>estudiantescuc[i].nota2;
		cout<<"Indique la nota 3: ";
		cin>>estudiantescuc[i].nota3;
        cout<<"Indique la nota 4: ";
		cin>>estudiantescuc[i].nota4;
        cout<<"Indique la nota 5: ";
		cin>>estudiantescuc[i].nota5;
 
		if (promedio > 6){
        cout<<"\nEstudiante APROBADO "<<endl;
		estudiantescuc[i].estatus=1;
		aprobados++;
		} else {
		cout<<"\nEstudiante REPROBADO "<<endl;
        estudiantescuc[i].estatus=0;
		reprobados++;
		}
	}
 
	
 return 0;
}
 
int promedio(int n1, int n2, int n3, int n4, int n5){
 
	float prom;
	prom=(n1+n2+n3+n4+n5)/5;
 
	return prom;
}