// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 6

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> dividirPalabras(const string& oracion) {
    vector<string> palabras;
    string actual = "";

    for (size_t i = 0; i < oracion.length(); i++) {
        if (oracion[i] == ' ') {
            if (actual != "") {
                palabras.push_back(actual);
                actual = "";
            }
        } else {
            actual += oracion[i];
        }
    }
    if (actual != "") {
        palabras.push_back(actual);
    }
    return palabras;
}

string invertirOrden(const vector<string>& palabras) {
    string resultado = "";
    for (int i = palabras.size() - 1; i >= 0; i--) {
        resultado += palabras[i];
        if (i > 0) resultado += " ";
    }
    return resultado;
}

int main() {
    string oracion;
    cout << "Ingrese una oración: ";
    getline(cin, oracion);

    vector<string> palabras = dividirPalabras(oracion);
    string invertida = invertirOrden(palabras);

    cout << invertida << endl;

    return 0;
}