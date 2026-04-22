// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 22/04/2026
// Número de ejercicio: 2
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int FILAS = 3;
const int COLS = 3;

void inicializarInventario(int bodega[FILAS][COLS]) {
    srand(time(0));
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            bodega[i][j] = rand() % 101; 
        }
    }
}

void balancearCarga(int bodega[FILAS][COLS], int filaProducto, int &totalTransferido) {
    totalTransferido = 0;
    if (bodega[filaProducto][0] > 80) {
        int excedente = bodega[filaProducto][0] - 80;
        bodega[filaProducto][0] = 80;
        bodega[filaProducto][1] += excedente;
        totalTransferido = excedente;
    }
}

void mostrarReporte(const vector<string> &nombres, int bodega[FILAS][COLS]) {
    cout << "=== REPORTE DE INVENTARIO ===" << endl;
    for (int i = 0; i < FILAS; i++) {
        cout << nombres[i] << ": ";
        for (int j = 0; j < COLS; j++) {
            cout << "Dep" << j+1 << "=" << bodega[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<string> productos = {"Arroz", "Fideo", "Aceite"};
    int bodega[FILAS][COLS];
    
    inicializarInventario(bodega);
    cout << "=== INVENTARIO INICIAL ===" << endl;
    mostrarReporte(productos, bodega);
    
    int transferido;
    balancearCarga(bodega, 0, transferido);
    
    cout << "\n=== DESPUES DE BALANCEAR PRODUCTO 0 ===" << endl;
    mostrarReporte(productos, bodega);
    cout << "Total transferido del producto 0: " << transferido << endl;
    
    return 0;
}