// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 1/04/2026
// Número de ejercicio: 2
#include <iostream>
using namespace std;
float calcularVolumen(float radio, float& altura);
int main()
{
    float altura;
    float radio;
    altura = 10;
    cout<<"ingrese el radio del cilindro: ";
    cin>>radio;
    cout<<calcularVolumen(radio, altura);
    return 0;
}
float calcularVolumen(float radio, float& altura)
{
    float volumen;
    volumen = 3.14*(radio*radio)*altura;
    return volumen;
}