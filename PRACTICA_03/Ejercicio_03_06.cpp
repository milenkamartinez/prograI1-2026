#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 04/03/2026
    system("cls");
    int n;
    int n1;
    int n2;
    int n3;
    int total_paniales;
    srand(time(0));
    cout<<"Ingrese la cantidad total de niños: ";
    cin>>n;
    n1=rand()%(n+1);            
    n2=rand()%(n-n1+1);          
    n3=n-n1-n2;                      
    total_paniales=(n1*6)+(n2*3)+(n3*2);
    cout<<"Niños de 1 año: "<<n1<<" consumen "<<n1*6<<" pañales"<<endl;
    cout<<"Niños de 2 años: "<<n2<<" consumen "<<n2*3<<" pañales"<<endl;
    cout<<"Niños de 3 años: "<<n3<<" consumen "<<n3*2<<" pañales"<<endl;
    cout<<"Total de pañales por día: "<<total_paniales<<endl;
    return 0;
}