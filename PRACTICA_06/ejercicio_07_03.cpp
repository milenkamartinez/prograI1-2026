// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 1/04/2026
// Número de ejercicio: 3
#include <iostream>
using namespace std;
int ModificarValores(int numerox, int& numeroy);
int main()
{
    int valor;
    int copia;
    cout<<"Ingrese un valor: ";
    cin>>valor;
    copia = ModificarValores(valor, valor);
    cout<<"El valor multiplicado por 2 (copia interna): "<<copia<<endl;
    cout <<"El valor original luego de sumar 10 (por referencia): "<<valor<<endl;
    return 0;
}
int ModificarValores(int numerox, int& numeroy)
{
    numerox = numerox * 2;   
    numeroy = numeroy + 10;   
    
    return numerox;   
}