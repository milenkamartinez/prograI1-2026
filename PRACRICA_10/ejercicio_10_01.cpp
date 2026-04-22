// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 22/04/2026
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void procesarResultados(const vector<string> &nombres, vector<double> &notas, 
                        double &promedio, int &aprobados) {
    double suma = 0;
    aprobados = 0;
    
    for (size_t i = 0; i < notas.size(); i++) {
        if (notas[i] >= 45 && notas[i] <= 50) {
            notas[i] = 51;
        }
        
        suma += notas[i];
        
        if (notas[i] >= 51) {
            aprobados++;
        }
    }
    
    promedio = suma / notas.size();
}

int main() {
    vector<string> nombres = {"Ana", "Luis", "Carlos", "Maria"};
    vector<double> notas = {48, 70, 30, 55};
    
    double promedio;
    int aprobados;
    
    procesarResultados(nombres, notas, promedio, aprobados);
    
    cout << "=== LISTA ACTUALIZADA ===" << endl;
    for (size_t i = 0; i < nombres.size(); i++) {
        cout << nombres[i] << ": " << notas[i] << endl;
    }
    
    cout << "Promedio general: " << promedio << endl;
    cout << "Aprobados: " << aprobados << endl;
    
    return 0;
}