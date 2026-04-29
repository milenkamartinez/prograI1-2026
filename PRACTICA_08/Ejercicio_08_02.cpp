// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> interseccionClientes(const vector<string>& lista1,
                                    const vector<string>& lista2) {
    vector<string> comunes;
    for (size_t i = 0; i < lista1.size(); i++) {
        for (size_t j = 0; j < lista2.size(); j++) {
            if (lista1[i] == lista2[j]) {
                bool yaExiste = false;
                for (size_t k = 0; k < comunes.size(); k++) {
                    if (comunes[k] == lista1[i]) {
                        yaExiste = true;
                        break;
                    }
                }
                if (!yaExiste) {
                    comunes.push_back(lista1[i]);
                }
            }
        }
    }
    return comunes;
}

int main() {
    vector<string> empresaA = {"Ana", "Luis", "Carlos", "Maria", "Pedro"};
    vector<string> empresaB = {"Maria", "Jose", "Ana", "Lucia", "Pedro"};

    vector<string> comunes = interseccionClientes(empresaA, empresaB);

    cout << "Clientes en común:" << endl;
    for (size_t i = 0; i < comunes.size(); i++) {
        cout << comunes[i] << endl;
    }
    cout << "Total: " << comunes.size() << endl;

    return 0;
}