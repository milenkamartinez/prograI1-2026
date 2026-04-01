// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 1/04/2026
// Número de ejercicio: 4
#include <iostream>
using namespace std;
float calcularPrecioTotal(float& precio, float iva);
int main()
{
    float precio;
    float iva;
    cout<<"ingrese el precio de su pructo: ";
    cin>>precio;
    iva = 0.13;
    cout<<"el precio total mas el iva es: "<<calcularPrecioTotal(precio, iva);
    return 0;
}
float calcularPrecioTotal(float& precio, float iva)
{
    float impuesto;
    impuesto = precio * iva;
    precio = precio + impuesto;
    return precio;
}