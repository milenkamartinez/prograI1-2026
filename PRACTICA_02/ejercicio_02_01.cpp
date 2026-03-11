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
int multiplicacion;
int numero;
cout<<"ingrese un numero del 1 al 10: ";
cin>>numero;
if (numero<=0 || numero>=11)
{
    cout<<"numero no valido";
}
else {
    for (multiplicacion = 1; multiplicacion<=10; multiplicacion++)
    {
         cout<<multiplicacion<<" x "<<numero<<" = "<< multiplicacion*numero<<endl;
    }
    
}
return 0;
}