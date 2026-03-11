#include <iostream>
using namespace std;
int main()
{
// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro.
// Carnet: 14184761.
// Carrera del estudiante: Ing. Biomedica.
// Fecha creación: 25/02/2026
system("cls");
int i;
int suma;
int numero;
suma=0;
cout<<"ingrese un numero: ";
cin>>numero;
for (i = 1; i < numero; i++)
{
    if (numero%i==0)
   {
    suma=suma+i;
   }
}
if (suma==numero)
{
    cout<<"el numero "<<numero<<" es perfecto";
}
else
{
    cout<<"el numero "<<numero<<" no es perfecto";
}
return 0;
}