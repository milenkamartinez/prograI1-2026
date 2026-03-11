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
int n; 
int i;
int precio;
int suma_ventas;
int monto_final;
int iva;
int descuento;
suma_ventas=0;
descuento=0;
cout << "Ingrese la cantidad de productos vendidos en el dia: ";
cin >> n;
for (i = 1; i <= n; i++)
{
    cout << "Ingrese el precio del producto " << i << ": ";
    cin >> precio;
    suma_ventas = suma_ventas + precio;
}
cout << "Suma total de ventas: " << suma_ventas << " Bs" << endl;
iva = (suma_ventas * 13) / 100;
monto_final = suma_ventas + iva;
cout << "IVA (13%): " << iva << " Bs" << endl;
cout << "Monto con IVA: " << monto_final << " Bs" << endl;
if (monto_final > 2500)
{
    descuento = (monto_final * 5) / 100;
    monto_final = monto_final - descuento;
    cout << "Descuento del 5%: " << descuento << " Bs" << endl;
    cout << "Monto final con descuento: " << monto_final << " Bs" << endl;
}
else
{
    cout << "No aplica descuento (monto no excede los 2500 Bs)" << endl;
}
cout << "Pago del IVA a Impuestos Nacionales: " << iva << " Bs" << endl;
return 0;
}