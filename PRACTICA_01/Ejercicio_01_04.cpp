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
float practicas; float teoria; float participacion; float porcentaje_pr; float porcentaje_te; float porcentaje_pa; float promedio;
cout<<"ingrese la nota de sus practicas: "; cin>> practicas; cout<<endl;
cout<<"ingrese la nota de la prueba teorica: "; cin>> teoria; cout<<endl;
cout<<"ingrese la nota de sus participaciones: "; cin>> participacion; cout<<endl;
porcentaje_pr = practicas * 0.3;
porcentaje_te = teoria * 0.6;
porcentaje_pa = participacion * 0.1;
promedio = porcentaje_pr + porcentaje_te + porcentaje_pa;
cout<<"la nota promedio de aprobacion es: "<<promedio;
    return 0;
}
