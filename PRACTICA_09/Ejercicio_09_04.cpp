// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarMatriz(vector<vector<int>>& matriz, int n, int minVal, int maxVal) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = minVal + rand() % (maxVal - minVal + 1);
        }
    }
}

void mostrarMatriz(const vector<vector<int>>& matriz) {
    for (size_t i = 0; i < matriz.size(); i++) {
        for (size_t j = 0; j < matriz[i].size(); j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
    
    int n, minVal, maxVal;
    
    cout << "Ingrese el orden n de la matriz (n x n): ";
    cin >> n;
    
    cout << "Ingrese el valor mínimo: ";
    cin >> minVal;
    
    cout << "Ingrese el valor máximo: ";
    cin >> maxVal;
    
    if (n <= 0) {
        cout << "Error: El orden de la matriz debe ser mayor que 0" << endl;
        return 1;
    }
    
    if (minVal > maxVal) {
        cout << "Error: El valor mínimo no puede ser mayor que el máximo" << endl;
        return 1;
    }
    
    vector<vector<int>> matriz(n, vector<int>(n));
    
    generarMatriz(matriz, n, minVal, maxVal);
    
    cout << "\nMatriz generada de orden " << n << " x " << n 
         << " con números aleatorios entre " << minVal << " y " << maxVal << ":" << endl;
    cout << "=========================================================" << endl;
    mostrarMatriz(matriz);
    
    return 0;
}