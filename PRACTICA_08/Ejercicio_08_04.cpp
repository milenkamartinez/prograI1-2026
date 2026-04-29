// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarImagen(vector<int>& pixeles, int N) {
    for (int i = 0; i < N; i++) {
        pixeles.push_back(rand() % 256);
    }
}

void agruparPorRangos(const vector<int>& pixeles) {
    int rangos[26] = {0}; // 0-10, 11-20, ..., 250-255

    for (size_t i = 0; i < pixeles.size(); i++) {
        int grupo = pixeles[i] / 10;
        rangos[grupo]++;
    }

    for (int i = 0; i <= 25; i++) {
        int inicio = i * 10;
        int fin = (i == 25) ? 255 : inicio + 9;
        cout << "Rango " << inicio << "-" << fin << ": " << rangos[i] << " pixeles" << endl;
    }
}

int main() {
    srand(time(0));
    int N;
    cout << "Cantidad de pixeles: ";
    cin >> N;

    vector<int> imagen;
    generarImagen(imagen, N);
    agruparPorRangos(imagen);

    return 0;
}