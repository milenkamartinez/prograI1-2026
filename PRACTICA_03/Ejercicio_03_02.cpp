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
    int lanzamiento;
    int caras;
    int cruces;
    caras=0;
    cruces=0;
    srand(time(0));
    cout<<"Ingrese la cantidad de lanzamientos: ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        lanzamiento=rand()%2+1; 
        if (lanzamiento==1)
        {
            caras++;
        }
        else
        {
            cruces++;
        }
    }
    cout<<"Porcentaje de caras: "<<(caras*100)/n<<"%"<<endl;
    cout<<"Porcentaje de cruces: "<<(cruces*100)/n<<"%"<<endl;
    return 0;
}