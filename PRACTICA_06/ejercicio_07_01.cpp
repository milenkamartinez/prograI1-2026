// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 1/04/2026
// Número de ejercicio: 1
#include <iostream>
using namespace std;
void intercambiar_valores(int& numero_1, int& numero_2, int& respaldo);
int main()
{
    int numero_1;
    int numero_2;
    int respaldo;
    cout<<"ingrese el primer numero: ";
    cin>>numero_1;
    cout<<"ingrese el segundo numero: ";
    cin>>numero_2;
    respaldo = numero_1;
    intercambiar_valores(numero_1, numero_2, respaldo);
    cout<<"el nuevo valor del primer numero es: "<<numero_1<<endl;
    cout<<"el nuevo valor del segundo numero es: "<<numero_2<<endl;
    return 0;
}
void intercambiar_valores(int& numero_1, int& numero_2, int& respaldo)
{
    cout<<"el valor del primer numero es: "<<numero_1<<endl;
    cout<<"el valor del segundo numero es: "<<numero_2<<endl;
    numero_1 = numero_2;
    numero_2 = respaldo;
}