// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void generarMatriz(vector<vector<int>>& matriz, int N, int A, int B) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = A + rand() % (B - A + 1);
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

int sumaUltimaColumna(const vector<vector<int>>& matriz) {
    int suma = 0;
    int N = matriz.size();
    for (int i = 0; i < N; i++) {
        suma += matriz[i][N - 1];
    }
    return suma;
}

long long productoUltimaFila(const vector<vector<int>>& matriz) {
    long long producto = 1;
    int N = matriz.size();
    for (int j = 0; j < N; j++) {
        producto *= matriz[N - 1][j];
    }
    return producto;
}

void mayorValorYPosicion(const vector<vector<int>>& matriz, int& mayor, int& fila, int& col) {
    mayor = matriz[0][0];
    fila = 0;
    col = 0;
    int N = matriz.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                fila = i;
                col = j;
            }
        }
    }
}

double desviacionEstandar(const vector<vector<int>>& matriz) {
    int N = matriz.size();
    int totalElementos = N * N;
    double suma = 0;
    
    // Calcular la suma de todos los elementos
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            suma += matriz[i][j];
        }
    }
    
    double media = suma / totalElementos;
    
    // Calcular la suma de los cuadrados de las diferencias
    double sumaCuadradosDiferencias = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double diferencia = matriz[i][j] - media;
            sumaCuadradosDiferencias += diferencia * diferencia;
        }
    }
    
    // Varianza y desviación estándar
    double varianza = sumaCuadradosDiferencias / totalElementos;
    return sqrt(varianza);
}

int main() {
    srand(time(0));
    
    int N, A, B;
    
    cout << "Ingrese el tamaño N de la matriz (N x N): ";
    cin >> N;
    
    cout << "Ingrese el valor mímimo A: ";
    cin >> A;
    
    cout << "Ingrese el valor máximo B: ";
    cin >> B;
    
    // Validar que A sea menor o igual que B
    if (A > B) {
        cout << "Error: A debe ser menor o igual que B" << endl;
        return 1;
    }
    
    vector<vector<int>> matriz(N, vector<int>(N));
    
    generarMatriz(matriz, N, A, B);
    
    cout << "\nMatriz generada (" << N << " x " << N << "):" << endl;
    mostrarMatriz(matriz);
    
    // a) Suma de la última columna
    int sumaUltCol = sumaUltimaColumna(matriz);
    cout << "\na) Suma de la última columna: " << sumaUltCol << endl;
    
    // b) Producto total de la última fila
    long long prodUltFila = productoUltimaFila(matriz);
    cout << "b) Producto total de la última fila: " << prodUltFila << endl;
    
    // c) Mayor valor y su posición
    int mayor, filaMayor, colMayor;
    mayorValorYPosicion(matriz, mayor, filaMayor, colMayor);
    cout << "c) Mayor valor: " << mayor 
         << " en posición: fila " << (filaMayor + 1) 
         << ", columna " << (colMayor + 1) << endl;
    
    // d) Desviación estándar
    double desvEstandar = desviacionEstandar(matriz);
    cout << "d) Desviación estándar: " << desvEstandar << endl;
    
    return 0;
}