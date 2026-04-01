// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 1/04/2026
// Número de ejercicio: 5
#include <iostream>
using namespace std;
double calcularArea(double lado);
double calcularArea(double base, double altura);
float calcularArea(float radio, float PI);
int main()
{
    //cuadrado
    double lado;
    cout<<"Ingrese el lado del cuadrado: ";
    cin>>lado;
    cout<<"Area del cuadrado: " << calcularArea(lado)<<endl;
    cout<<endl;
    //rectangulo
    double base, altura;
    cout<<"Ingrese la base del rectángulo: ";
    cin>>base;
    cout<<"Ingrese la altura del rectángulo: ";
    cin>>altura;
    cout<<"Area del rectángulo: " << calcularArea(base, altura)<<endl;
    cout<<endl;
    //circulo
    float radio;
    float PI = 3.1416;
    cout<<"Ingrese el radio del círculo: ";
    cin>>radio;
    cout<<"Area del círculo: "<<calcularArea(radio, PI)<<endl;
    return 0;
}
double calcularArea(double lado)
{
    return lado * lado;
}
double calcularArea(double base, double altura)
{
    return base * altura;
}
float calcularArea(float radio, float PI)
{
    return PI * radio * radio;
}