#include <iostream>
using namespace std;
bool Par(int numero);
int main()
{
    // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    int numero;
    bool resultado;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    resultado = Par(numero);
    if (resultado == true) {
        cout << "El numero " << numero << " es par" << endl;
    } else {
        cout << "El numero " << numero << " no es par" << endl;
    }
    return 0;
}
bool Par(int numero) {
    if (numero % 2 == 0) {
        return true;  
    } else {
        return false; 
    }
}