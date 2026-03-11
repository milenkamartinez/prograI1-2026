#include <iostream>
using namespace std;
int contarDigitos(int numero);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    int digitos = contarDigitos(numero);
    cout << "El numero " << numero << " tiene " << digitos << " digito(s)" << endl;
    return 0;
}
int contarDigitos(int numero)
{
    int contador = 0;
    while (numero > 0) {
        numero = numero / 10;  
        contador++;           
    }
    return contador;
}