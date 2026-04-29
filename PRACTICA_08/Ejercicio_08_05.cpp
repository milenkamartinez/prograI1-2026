// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;

bool validarEmail(const string& email) {
    int arrobaPos = -1;
    int puntoPos = -1;

    for (size_t i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            if (arrobaPos != -1) return false; // más de un @
            arrobaPos = i;
        }
    }

    if (arrobaPos == -1 || arrobaPos == 0 || arrobaPos == (int)email.length() - 1) {
        return false;
    }

    for (size_t i = arrobaPos + 1; i < email.length(); i++) {
        if (email[i] == '.') {
            puntoPos = i;
            break;
        }
    }

    if (puntoPos == -1 || puntoPos == arrobaPos + 1 || puntoPos == (int)email.length() - 1) {
        return false;
    }

    return true;
}

int main() {
    string email;
    cout << "Ingrese email: ";
    cin >> email;

    if (validarEmail(email)) {
        cout << "Correo electrónico válido" << endl;
    } else {
        cout << "Correo electrónico inválido" << endl;
    }

    return 0;
}