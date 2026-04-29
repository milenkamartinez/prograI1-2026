// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 10

#include <iostream>
#include <string>

using namespace std;

string capitalizarPalabras(const string& texto) {
    string resultado = "";
    bool nuevaPalabra = true;

    for (size_t i = 0; i < texto.length(); i++) {
        char c = texto[i];

        if (c == ' ') {
            resultado += c;
            nuevaPalabra = true;
        } else {
            if (nuevaPalabra && (c >= 'a' && c <= 'z')) {
                resultado += c - 32; // a mayuscula
            } else {
                resultado += c;
            }
            nuevaPalabra = false;
        }
    }
    return resultado;
}

int main() {
    string texto;
    cout << "Ingrese texto: ";
    getline(cin, texto);

    string capitalizado = capitalizarPalabras(texto);
    cout << capitalizado << endl;

    return 0;
}