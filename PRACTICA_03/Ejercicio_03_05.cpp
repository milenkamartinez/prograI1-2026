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
    int cont_primos;
    int es_primo;
    cont_primos=0;
    srand(time(0));
    cout<<"Ingrese la cantidad de numeros a generar: ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        num=rand()%10000+1;
        cout<<"Numero "<<i<<": "<<num<<endl;
        es_primo = 1; 
        if (num==1)
        {
            es_primo=0;
        }
        else
        {
            for (int j=2; j<num && es_primo==1; j++)
            {
                if (num%j==0)
                {
                    es_primo=0;
                }
            }
        }
        if (es_primo==1)
        {
            cont_primos++;
        }
    }
    cout<<"Cantidad de numeros primos: "<<cont_primos<<endl;
    return 0;
}