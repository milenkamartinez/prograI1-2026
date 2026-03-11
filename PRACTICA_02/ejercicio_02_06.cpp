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
int numero_1;
int numero_2;
cout<<"ingrese el numero 1: ";
cin>>numero_1;
cout<<endl<<"ingrese el numero 2: ";
cin>>numero_2;
if (numero_1>numero_2)
{
    for (i = numero_1; i >= numero_2; i--)
    {
        cout<<i<<endl;
    }
}
else
{
    for (i = numero_1; i <= numero_2; i++)
    {
        cout<<i<<endl;
    }
}
return 0;
}