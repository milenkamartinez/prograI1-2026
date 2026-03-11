#include <iostream>
using namespace std;
int numero_mayor(int numero1, int numero2, int numero3);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    int numero1;
    int numero2;
    int numero3;
    cout<<"ingrese el primer numero: ";
    cin>>numero1;
    cout<<"ingrese el segundo numero: ";
    cin>>numero2;
    cout<<"ingrese el tercer numero: ";
    cin>>numero3;
    numero_mayor(numero1, numero2, numero3);
    return 0;
}
int numero_mayor(int numero1, int numero2, int numero3)
{
    if (numero1>numero2)
    {
        if (numero1>numero3)
        {
            cout<<"el primer numero: "<<numero1<<" es el mayor"<<endl;
        }
    }
    else if (numero2>numero1)
    {
        if (numero2>numero3)
        {
            cout<<"el segundo numero: "<<numero2<<" es el mayor"<<endl;
        }
        
    }
    else if (numero3>numero1)
    {
        if (numero3>numero2)
        {
            cout<<"el tercer numero: "<<numero3<<"es el mayor"<<endl;
        }
    }
    return 0;
}