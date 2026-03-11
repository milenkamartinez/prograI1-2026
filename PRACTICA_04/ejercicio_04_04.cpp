#include <iostream>
using namespace std;
float conversion_oficial(float bs);
float conversion_paralelo(float bs);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    float bs;
    cout<<"ingrese su monto de dinero en bs: ";
    cin>>bs;
    cout<<"su conversion al tipo de cambio oficial es: "<<conversion_oficial(bs)<<"$"<<endl;
    cout<<"su conversion al tipo de cambio paralelo es: "<<conversion_paralelo(bs)<<"$"<<endl;
    return 0;
}
float conversion_oficial(float bs)
{
    float conversion1;
    conversion1=bs/6.91;
    return conversion1;
}
float conversion_paralelo(float bs)
{
    float conversion2;
    conversion2=bs/9.17;
    return conversion2;
}