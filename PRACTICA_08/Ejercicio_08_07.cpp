// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 7

#include <iostream>
#include <string>

using namespace std;

string eliminarDigitos(const string& cadena) {
    string resultado = "";
    for (size_t i = 0; i < cadena.length(); i++) {
        if (!(cadena[i] >= '0' && cadena[i] <= '9')) {
            resultado += cadena[i];
        }
    }
    return resultado;
}

int main() {
    string texto;
    cout << "Ingrese cadena: ";
    cin >> texto;

    string sinDigitos = eliminarDigitos(texto);
    cout << sinDigitos << endl;

    return 0;
}