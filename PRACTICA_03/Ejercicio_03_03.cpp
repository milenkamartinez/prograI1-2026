#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 04/03/2026
    system("cls");
    int num;
    int factorial;
    factorial=1;
    srand(time(0));
    num=rand()%10+1; 
    for (int i=1; i<=num; i++)
    {
        factorial=factorial*i;
    }
    cout<<"Numero generado: "<<num<<endl;
    cout<<"Su factorial es: "<<factorial<<endl;
    return 0;
}