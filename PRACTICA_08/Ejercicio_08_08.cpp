// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 8

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> dividirPorDelimitador(const string& cadena, char delimitador) {
    vector<string> tokens;
    string actual = "";

    for (size_t i = 0; i < cadena.length(); i++) {
        if (cadena[i] == delimitador) {
            tokens.push_back(actual);
            actual = "";
        } else {
            actual += cadena[i];
        }
    }
    if (actual != "") {
        tokens.push_back(actual);
    }
    return tokens;
}

int main() {
    string texto;
    char delim;

    cout << "Ingrese cadena: ";
    cin >> texto;
    cout << "Ingrese delimitador: ";
    cin >> delim;

    vector<string> tokens = dividirPorDelimitador(texto, delim);

    for (size_t i = 0; i < tokens.size(); i++) {
        cout << tokens[i] << endl;
    }

    return 0;
}