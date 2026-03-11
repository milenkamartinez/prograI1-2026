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
int n;
int suma;
suma=0;
cout<<"ingrese el numero n: ";
cin>>n;
for (i = 0; i < n+1; i++)
{
    suma=suma+i;
}
cout<<"la suma de 1 a "<<n<<" es: "<<suma;
return 0;
}