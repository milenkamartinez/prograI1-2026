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
    int n;
    int cara;
    int pares;
    pares=0;
    srand(time(0));
    cout<<"Ingrese la cantidad de lanzamientos: ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cara=rand()%6+1; 
        if (cara%2==0)
        {
            pares++;
        }
    }
    cout<<"Frecuencia de caras pares: "<<pares<<endl;
    return 0;
}
