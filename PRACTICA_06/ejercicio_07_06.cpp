// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 1/04/2026
// Número de ejercicio: 6
#include <iostream>
using namespace std;
void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);
int main()
{
    int totalSegundos;
    int horas, minutos, segundos;
    cout<<"Ingrese la cantidad de segundos: ";
    cin>>totalSegundos;
    calcularTiempo(totalSegundos, horas, minutos, segundos);
    cout<<totalSegundos<<" segundos equivalen a: "<<endl;
    cout<<horas<<" horas, "<<minutos<<" minutos, "<<segundos<<" segundos"<<endl;
    return 0;
}
void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos/3600;           
    int restante = totalSegundos%3600;    
    minutos = restante/60;                
    segundos = restante%60;               
}