#include <iostream>
using namespace std;
int main()
{
// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro.
// Carnet: 14184761.
// Carrera del estudiante: Ing. Biomedica.
// Fecha creación: 11/02/2026
system("cls");
int a; int residuo;
cout<<"ingrese el numero a evaluar: "; cin>>a; cout<<endl;
residuo = a % 2;
if (residuo==0){
    cout<<"el numero es par";
} else{
    cout<<"el numero no es par";
}
    return 0;
}
