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
    int num;
    int suma;
    int mayor;
    int menor;
    suma=0;
    mayor=0;
    menor=1001;
    srand(time(0));
    cout<<"Ingrese la cantidad de numeros a generar: ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        num=rand()%1000+1;
        cout<<"Numero "<<i<<": "<<num<<endl;
        suma=suma+num;
        if (num>mayor)
        {
            mayor=num;
        }
        if (num<menor)
        {
            menor=num;
        }
    }
    cout<<"Sumatoria: "<<suma<<endl;
    cout<<"Promedio: "<<suma/n<<endl;
    cout<<"Mayor valor: "<<mayor<<endl;
    cout<<"Menor valor: "<<menor<<endl;
    return 0;
}