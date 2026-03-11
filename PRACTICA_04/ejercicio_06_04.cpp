#include <iostream>
using namespace std;
int suma(int n);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    int n;
    cout<<"ingrese el numero: ";
    cin>>n;
    cout<<"la suma de los numeros es: "<<suma(n);
    return 0;
}
int suma(int n)
{
    int suma;
    suma=0;
    for (int i = 0; i <= n; i++)
    {
        suma=suma+i;
    }
    return suma;
}