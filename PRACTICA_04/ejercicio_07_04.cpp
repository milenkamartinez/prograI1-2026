#include <iostream>
using namespace std;
float mru(float a, float b);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    float velocidad_k;
    float tiempo;
    cout<<"ingrese la velocidad constante: ";
    cin>>velocidad_k;
    cout<<"ingrese el tiempo: ";
    cin>>tiempo;
    cout<<"la distancia recorrida fue: "<<mru(velocidad_k, tiempo);
    return 0;
}
float mru(float a, float b)
{
    float distancia;
    distancia=a*b;
    return distancia;
}