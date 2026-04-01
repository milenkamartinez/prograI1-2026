// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 1/04/2026
// Número de ejercicio: 7
#include <iostream>
using namespace std;
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);
int main()
{
    double sumaTotal = 0;
    int cantidadNotas = 0;
    int N;
    double nota;
    cout<<"Ingrese la cantidad de notas a registrar: ";
    cin>>N;
    for(int i = 1; i <= N; i++)
    {
        cout<<"Ingrese la nota "<<i<<": ";
        cin>>nota;
        agregarNota(sumaTotal, cantidadNotas, nota);
    }
    cout<<"\n--- Resultados ---"<<endl;
    cout<<"Cantidad de notas: "<<cantidadNotas<<endl;
    cout<<"Suma total de notas: "<<sumaTotal<<endl;
    if(cantidadNotas > 0)
    {
        double promedio = sumaTotal/cantidadNotas;
        cout << "Promedio: "<<promedio<<endl;
    }
    return 0;
}
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas = cantidadNotas + 1;
}