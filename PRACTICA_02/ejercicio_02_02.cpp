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
int numero;
int suma;
int suma_pares;
int detector_primos;
int primo;
int suma_primos;
suma=0;
suma_pares=0;
suma_primos=0;
while (numero!=0)
{
    cout<<"ingrese un numero del 1 al 100 y luego 0 para deterse: ";
    cin>>numero;
    if(numero<1 || numero>100)
    {
    cout<<"numero no valido"<<endl;
    }
    else{
        suma=suma+numero;
    if (numero%2==0)
    {
        suma_pares=suma_pares+numero;
    }
    for (detector_primos = 2; detector_primos < numero; detector_primos++)
    {
        primo=numero%detector_primos;
        if (primo!=0)
        {
            suma_primos=suma_primos+numero;
        }
    }
    }
}
cout<<"la suma de todos los numeros es: "<<suma<<endl;
cout<<"la suma de los numeros pares es: "<<suma_pares<<endl;
cout<<"la suma de los numeros primos es: "<<suma_primos<<endl; //no me salia inge, sufri con los numeros primos :c
return 0;
}