// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>

using namespace std;

void intercambiarFilas(vector<vector<int>>& matriz, int fila1, int fila2) {
    vector<int> temp = matriz[fila1];
    matriz[fila1] = matriz[fila2];
    matriz[fila2] = temp;
}

void mostrarMatriz(const vector<vector<int>>& matriz) {
    for (size_t i = 0; i < matriz.size(); i++) {
        for (size_t j = 0; j < matriz[i].size(); j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el orden n de la matriz (n x n): ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz original:" << endl;
    mostrarMatriz(matriz);

    // Intercambiar fila 1 (índice 0) con fila n (índice n-1)
    intercambiarFilas(matriz, 0, n - 1);

    cout << "\nMatriz después de intercambiar fila 1 con fila " << n << ":" << endl;
    mostrarMatriz(matriz);

    return 0;
}