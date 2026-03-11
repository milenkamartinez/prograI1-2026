#include <iostream>
using namespace std;
float volumen(float altura, float radio);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    float altura;
    float radio;
    cout<<"ingrese la altura: ";
    cin>>altura;
    cout<<"ingrese el radio: ";
    cin>>radio;
    cout<<"el volumen del cilinro es: "<<volumen(altura, radio);
    return 0;
}
float volumen(float altura, float radio)
{
    float volumen;
    volumen = 3.14159 * radio * radio * altura;
    return volumen;
}