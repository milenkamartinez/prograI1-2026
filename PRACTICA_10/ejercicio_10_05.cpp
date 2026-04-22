// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 22/04/2026
// Número de ejercicio: 5
#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int TAM = 10;

void asignarAsientoEspecial(char sala[TAM][TAM], vector<string> &espera, 
                            int fila, int col, string nombre, bool &exito) {
    fila--;
    col--;
    if (fila >= 0 && fila < TAM && col >= 0 && col < TAM) {
        if (sala[fila][col] == 'D') {
            sala[fila][col] = 'R';
            exito = true;
            cout << "Asiento reservado para " << nombre << endl;
        } else {
            exito = false;
            espera.push_back(nombre);
            cout << "Asiento ocupado. " << nombre << " agregado a lista de espera." << endl;
        }
    } else {
        exito = false;
        cout << "Asiento inválido" << endl;
    }
}

void inicializarSala(char sala[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            sala[i][j] = 'D'; 
        }
    }
}

void mostrarSala(char sala[TAM][TAM]) {
    cout << "  ";
    for (int c = 1; c <= TAM; c++) cout << c << " ";
    cout << endl;
    for (int i = 0; i < TAM; i++) {
        cout << i+1 << " ";
        for (int j = 0; j < TAM; j++) {
            cout << sala[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    char sala[TAM][TAM];
    vector<string> listaEspera;
    
    inicializarSala(sala);
    
    cout << "=== ASIENTOS INICIALES ===" << endl;
    mostrarSala(sala);
    
    bool exito;
    asignarAsientoEspecial(sala, listaEspera, 3, 5, "Ana", exito);
    asignarAsientoEspecial(sala, listaEspera, 3, 5, "Luis", exito);
    
    cout << "\n=== ASIENTOS FINALES ===" << endl;
    mostrarSala(sala);
    
    cout << "\n=== LISTA DE ESPERA ===" << endl;
    for (const auto &nombre : listaEspera) {
        cout << nombre << endl;
    }
    
    return 0;
}