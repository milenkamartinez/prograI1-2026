#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int generar_precios();
float iva(int precio);
float impuesto_iva(int precio);
int main()
{
     // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    srand(time(NULL));
    int n;
    int precio;
    float precio_con_iva;
    float suma_sin_iva=0;
    float suma_con_iva=0;
    float suma_impuesto=0;
    float descuento;
    float impuesto;
    cout<<"ingrese la cantidad de productos q se vendieron: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        precio=generar_precios();
        cout<<"el precio del producto "<<i<<" es: "<<precio<<endl;
        precio_con_iva=iva(precio);
        cout<<"el precio del producto "<<i<<" mas el iva es: "<<precio_con_iva<<endl;
        suma_sin_iva=suma_sin_iva+precio;
        suma_con_iva=suma_con_iva+precio_con_iva;
        impuesto=impuesto_iva(precio);
        suma_impuesto=suma_impuesto+impuesto;
    }
    cout<<"====SUMAS===="<<endl;
    cout<<"las suma de todos los productos sin aplicar el iva fue: "<<suma_sin_iva<<endl;
    cout<<"la suma de todos los productos aplicando el iva fue: "<<suma_con_iva<<endl;
    if (suma_con_iva>2500)
    {
        cout<<"usted tiene un descuento del 5% en el total de sus cumpras"<<endl;
        descuento=suma_con_iva*0,05;
        cout<<"el precio que debe pagar con el descuento es: "<<suma_con_iva-descuento<<endl;
    }
    else
    {
        cout<<"el precio que debe pagar por sus productos es de: "<<suma_con_iva<<endl;
    }
    cout<<"la cantidad total de impuestos que esta pagando a impuestos nacionales es: "<<suma_impuesto;
    return 0;
}
int generar_precios()
{
    int precio;
    precio=rand()%31+20;
    return precio;
}
float iva(int precio)
{
    float iva;
    float precio_con_impuesto;
    iva=precio*0.13;
    precio_con_impuesto=precio+iva;
    return precio_con_impuesto;
}
float impuesto_iva(int precio)
{
    float iva2;
    iva2=precio*0.13;
    return iva2;
}