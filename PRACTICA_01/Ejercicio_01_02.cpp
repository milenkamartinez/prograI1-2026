#include <iostream>
using namespace std;
int main()
{
// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro.
// Carnet: 14184761.
// Carrera del estudiante: Ing. Biomedica.
// Fecha creación: 11/02/2026
system("cls");
float precio; float iva; float impuesto;
cout<<"ingrese el precio de su producto: "; cin>>precio;
iva = 1 + 0.13;
impuesto = precio * iva;
cout<<endl<<"precio total con el impuesto aplicado: "<<impuesto;
    return 0;
}
