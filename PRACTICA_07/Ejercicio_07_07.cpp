// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 13/04/2026
// Número de ejercicio: 7
#include <iostream>
#include <vector>

using namespace std;

void imprimirVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    vector<int> numeros;
    int valor;

    cout << "Ingrese numeros enteros (negativo para terminar):" << endl;
    while (numeros.size() < 10) {
        cin >> valor;
        if (valor < 0) break;
        numeros.push_back(valor);
    }

    cout << "Elementos introducidos:" << endl;
    imprimirVector(numeros);

    return 0;
}