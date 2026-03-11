#include <iostream>
using namespace std;
int area(int base, int altura);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    int base;
    int altura;
    cout<<"ingrese la base: ";
    cin>>base;
    cout<<"ingrese la altura: ";
    cin>>altura;
    cout<<"el area del triangulo es: "<<area(base, altura);
    return 0;
}
int area(int base, int altura)
{
    int area;
    area = (base * altura) / 2;
    return area;
}