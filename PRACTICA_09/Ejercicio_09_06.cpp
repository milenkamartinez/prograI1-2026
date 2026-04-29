// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarMatriz(vector<vector<int>>& matriz, int filas, int columnas, int minVal, int maxVal) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = minVal + rand() % (maxVal - minVal + 1);
        }
    }
}

void ingresarMatriz(vector<vector<int>>& matriz, int filas, int columnas) {
    cout << "\nIngrese los elementos de la matriz (" << filas << " x " << columnas << "):" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Matriz[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
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

vector<vector<int>> transponerMatriz(const vector<vector<int>>& matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();
    
    // La matriz transpuesta tiene dimensiones columnas x filas
    vector<vector<int>> transpuesta(columnas, vector<int>(filas));
    
    // Transponer: intercambiar filas por columnas
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    
    return transpuesta;
}

int main() {
    srand(time(0));
    
    int N, M;
    int opcion;
    
    cout << "===== TRANSPUESTA DE UNA MATRIZ (N x M) =====" << endl;
    cout << "Ingrese el número de filas (N): ";
    cin >> N;
    cout << "Ingrese el número de columnas (M): ";
    cin >> M;
    
    if (N <= 0 || M <= 0) {
        cout << "Error: Las dimensiones deben ser mayores que 0" << endl;
        return 1;
    }
    
    vector<vector<int>> matriz(N, vector<int>(M));
    
    cout << "\n¿Cómo desea llenar la matriz?" << endl;
    cout << "1. Ingresar manualmente" << endl;
    cout << "2. Generar aleatoriamente" << endl;
    cout << "Opción: ";
    cin >> opcion;
    
    if (opcion == 1) {
        // Ingreso manual
        ingresarMatriz(matriz, N, M);
    } else {
        // Generación aleatoria
        int minVal, maxVal;
        cout << "Ingrese el valor mínimo: ";
        cin >> minVal;
        cout << "Ingrese el valor máximo: ";
        cin >> maxVal;
        
        generarMatriz(matriz, N, M, minVal, maxVal);
    }
    
    // Mostrar la matriz original
    cout << "\n===== MATRIZ ORIGINAL (" << N << " x " << M << ") =====" << endl;
    mostrarMatriz(matriz);
    
    // Calcular la transpuesta
    vector<vector<int>> transpuesta = transponerMatriz(matriz);
    
    // Mostrar la matriz transpuesta
    cout << "\n===== MATRIZ TRANSPUESTA (" << M << " x " << N << ") =====" << endl;
    mostrarMatriz(transpuesta);
    
    // Mostrar la fórmula matemática
    cout << "\n===== REPRESENTACIÓN MATEMÁTICA =====" << endl;
    cout << "Si A es una matriz de " << N << " x " << M << ":" << endl;
    cout << "A^T será una matriz de " << M << " x " << N << endl;
    cout << "Donde (A^T)[i][j] = A[j][i]" << endl;
    
    return 0;
}