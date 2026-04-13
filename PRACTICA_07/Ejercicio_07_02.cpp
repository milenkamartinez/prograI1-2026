// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 13/04/2026
// Número de ejercicio: 2
#include <iostream>
#include <vector>

using namespace std;

void mostrarVector(const vector<double>& v, int cols) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << "\t";
        if ((i + 1) % cols == 0) cout << endl;
    }
}

int main() {
    vector<double> voltios;
    voltios.push_back(11.95);
    voltios.push_back(16.32);
    voltios.push_back(12.15);
    voltios.push_back(8.22);
    voltios.push_back(15.98);
    voltios.push_back(26.22);
    voltios.push_back(13.54);
    voltios.push_back(6.45);
    voltios.push_back(17.59);

    mostrarVector(voltios, 3);

    return 0;
}
