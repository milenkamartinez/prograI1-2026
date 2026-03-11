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
int j;
int factorial;
int n;
int suma;
suma=0;
cout<<"ingrese el numero n: ";
cin>>n;
for (i = 1; i <=n; i++)
{
    factorial=1;
    for (j = 1; j <= i; j++)
{
    factorial=factorial*j;
}
suma=suma+factorial;
}
cout<<"la suma de factoriales es: "<<suma;
return 0;
}

