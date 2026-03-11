#include <iostream>
using namespace std;
float calcularPromedio(float nota1, float nota2);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    float nota1;
    float nota2;
    float promedio;
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    promedio = calcularPromedio(nota1, nota2);
    cout << "El promedio de " << nota1 << " y " << nota2 << " es: " << promedio << endl;
    return 0;
} 
float calcularPromedio(float nota1, float nota2) 
{
    float suma = nota1 + nota2;
    float promedio = suma / 2;
    return promedio;
}