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
float a; float b; float suma; float resta; float multiplicacion; float division;
cout<<"ingrese el primer numero: "; cin>> a;
cout<<"ingrese el segundo numero: "; cin>> b;
suma = a + b;
resta = a - b;
multiplicacion = a * b;
division = a / b;
cout<<"la suma de los numeros es: "<<suma<<endl;
cout<<"la resta de los numeros es: "<<resta<<endl;
cout<<"la multiplicacion de los numeros es: "<<multiplicacion<<endl;
cout<<"la division de los numeros es: "<<division<<endl;
    return 0;
}
