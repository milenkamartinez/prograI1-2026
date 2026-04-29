// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 5

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

void ingresarMatriz(vector<vector<int>>& matriz, int filas, int columnas, const string& nombre) {
    cout << "\nIngrese los elementos de la matriz " << nombre << " (" << filas << " x " << columnas << "):" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << nombre << "[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(const vector<vector<int>>& matriz, const string& nombre) {
    cout << "\nMatriz " << nombre << ":" << endl;
    for (size_t i = 0; i < matriz.size(); i++) {
        for (size_t j = 0; j < matriz[i].size(); j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& A, 
                                        const vector<vector<int>>& B) {
    int N = A.size();        // Filas de A
    int M = A[0].size();     // Columnas de A / Filas de B
    int P = B[0].size();     // Columnas de B
    
    // Inicializar matriz resultado con ceros
    vector<vector<int>> resultado(N, vector<int>(P, 0));
    
    // Multiplicación de matrices
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < M; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    return resultado;
}

int main() {
    srand(time(0));
    
    int N, M;
    int opcion;
    
    cout << "===== MULTIPLICACIÓN DE MATRICES (N x M) * (M x N) =====" << endl;
    cout << "Ingrese el valor de N: ";
    cin >> N;
    cout << "Ingrese el valor de M: ";
    cin >> M;
    
    if (N <= 0 || M <= 0) {
        cout << "Error: Las dimensiones deben ser mayores que 0" << endl;
        return 1;
    }
    
    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(M, vector<int>(N));
    
    cout << "\n¿Cómo desea llenar las matrices?" << endl;
    cout << "1. Ingresar manualmente" << endl;
    cout << "2. Generar aleatoriamente" << endl;
    cout << "Opción: ";
    cin >> opcion;
    
    if (opcion == 1) {
        // Ingreso manual
        ingresarMatriz(A, N, M, "A");
        ingresarMatriz(B, M, N, "B");
    } else {
        // Generación aleatoria
        int minVal, maxVal;
        cout << "Ingrese el valor mínimo: ";
        cin >> minVal;
        cout << "Ingrese el valor máximo: ";
        cin >> maxVal;
        
        generarMatriz(A, N, M, minVal, maxVal);
        generarMatriz(B, M, N, minVal, maxVal);
    }
    
    // Mostrar las matrices originales
    mostrarMatriz(A, "A");
    mostrarMatriz(B, "B");
    
    // Multiplicar matrices
    vector<vector<int>> C = multiplicarMatrices(A, B);
    
    // Mostrar resultado
    cout << "\n===== RESULTADO DE LA MULTIPLICACIÓN =====" << endl;
    cout << "Matriz C = A x B (" << N << " x " << N << "):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}