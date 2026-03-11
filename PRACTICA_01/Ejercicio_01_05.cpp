#include <iostream>
#include <cmath>
using namespace std;
int main()
{
// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro.
// Carnet: 14184761.
// Carrera del estudiante: Ing. Biomedica.
// Fecha creación: 11/02/2026
system("cls");
float cateto_1; float cateto_2; float potencia_1; float potencia_2; float suma; float hipotenusa;
cout<<"ingrese el cateto 1: "; cin>>cateto_1; cout<<endl;
cout<<"ingrese el cateto 2: "; cin>>cateto_2; cout<<endl;
potencia_1 = cateto_1 * cateto_1;
potencia_2 = cateto_2 * cateto_2; 
suma = potencia_1 + potencia_2;
hipotenusa = sqrt(suma);
cout<<"la hipotenusa del triangulo es: "<<hipotenusa;
    return 0;
}
