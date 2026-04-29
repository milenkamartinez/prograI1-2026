// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 9

#include <iostream>
#include <string>

using namespace std;

string limpiarTexto(const string& texto) {
    string limpio = "";
    for (size_t i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (c >= 'A' && c <= 'Z') {
            limpio += c + 32; // a minuscula
        } else if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            limpio += c;
        }
    }
    return limpio;
}

bool esPalindromo(const string& texto) {
    string limpio = limpiarTexto(texto);
    int inicio = 0;
    int fin = limpio.length() - 1;

    while (inicio < fin) {
        if (limpio[inicio] != limpio[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() {
    string frase;
    cout << "Ingrese frase o palabra: ";
    getline(cin, frase);

    if (esPalindromo(frase)) {
        cout << "Verdadero (es palíndromo)" << endl;
    } else {
        cout << "Falso (no es palíndromo)" << endl;
    }

    return 0;
}