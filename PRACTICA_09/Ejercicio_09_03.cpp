// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

// Constantes globales para el tamaño de la matriz
const int FILAS = 5;
const int COLUMNAS = 5;

// Matriz constante para probar el programa
// 'o' = lugar seguro, 'x' = muerto viviente
const char MATRIZ[FILAS][COLUMNAS] = {
    {'x', 'o', 'x', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o'},
    {'o', 'x', 'o', 'o', 'x'},
    {'o', 'o', 'o', 'o', 'o'},
    {'x', 'o', 'o', 'o', 'o'}
};

// a) Mostrar la matriz que describe el área
void mostrarMatriz() {
    cout << "Mapa del área (x = muerto viviente, o = lugar seguro):" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << MATRIZ[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// b) Mostrar el número de filas y columnas que no tienen un muerto viviente
void filasYColumnasSinMuertos(int& filasSinMuertos, int& columnasSinMuertos) {
    filasSinMuertos = 0;
    columnasSinMuertos = 0;
    
    // Contar filas sin muertos
    for (int i = 0; i < FILAS; i++) {
        bool tieneMuerto = false;
        for (int j = 0; j < COLUMNAS; j++) {
            if (MATRIZ[i][j] == 'x') {
                tieneMuerto = true;
                break;
            }
        }
        if (!tieneMuerto) {
            filasSinMuertos++;
        }
    }
    
    // Contar columnas sin muertos
    for (int j = 0; j < COLUMNAS; j++) {
        bool tieneMuerto = false;
        for (int i = 0; i < FILAS; i++) {
            if (MATRIZ[i][j] == 'x') {
                tieneMuerto = true;
                break;
            }
        }
        if (!tieneMuerto) {
            columnasSinMuertos++;
        }
    }
}

// c) Determinar las coordenadas de los muertos vivientes
void coordenadasMuertos(vector<int>& filasMuertos, vector<int>& columnasMuertos) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (MATRIZ[i][j] == 'x') {
                filasMuertos.push_back(i);
                columnasMuertos.push_back(j);
            }
        }
    }
}

// d) La cantidad de muertos vivientes que existen en toda la matriz
int cantidadMuertos() {
    int contador = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (MATRIZ[i][j] == 'x') {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    // a) Mostrar la matriz
    mostrarMatriz();
    
    // b) Filas y columnas sin muertos
    int filasSeguras, columnasSeguras;
    filasYColumnasSinMuertos(filasSeguras, columnasSeguras);
    cout << "b) Número de filas sin muertos vivientes: " << filasSeguras << endl;
    cout << "   Número de columnas sin muertos vivientes: " << columnasSeguras << endl;
    cout << endl;
    
    // c) Coordenadas de los muertos vivientes
    vector<int> filasMuertos, columnasMuertos;
    coordenadasMuertos(filasMuertos, columnasMuertos);
    cout << "c) Coordenadas de los muertos vivientes (fila, columna):" << endl;
    for (size_t i = 0; i < filasMuertos.size(); i++) {
        cout << "   Muerto " << i + 1 << ": (" << filasMuertos[i] + 1 
             << ", " << columnasMuertos[i] + 1 << ")" << endl;
    }
    cout << endl;
    
    // d) Cantidad total de muertos
    int totalMuertos = cantidadMuertos();
    cout << "d) Cantidad total de muertos vivientes: " << totalMuertos << endl;
    cout << endl;
    
    // e) Determinar si dos o más muertos están en la primera columna
    int muertosPrimeraColumna = 0;
    for (int i = 0; i < FILAS; i++) {
        if (MATRIZ[i][0] == 'x') {
            muertosPrimeraColumna++;
        }
    }
    
    if (muertosPrimeraColumna >= 2) {
        cout << "e) No es posible entrar al complejo" << endl;
    } else {
        cout << "e) Es posible entrar al complejo" << endl;
    }
    
    return 0;
}