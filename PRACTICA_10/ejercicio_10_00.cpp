// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 22/04/2026
// Número de ejercicio: 0
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarNombres(int N) {
    vector<string> nombres = {"Juan", "Maria", "Carlos", "Ana", "Luis", 
                              "Elena", "Pedro", "Sofia", "Diego", "Lucia"};
    vector<string> apellidos = {"Perez", "Lopez", "Garcia", "Mamani", "Quispe",
                                "Flores", "Choque", "Condori", "Tarqui", "Vargas"};
    
    srand(time(0));
    
    cout << "Nombres generados:" << endl;
    for (int i = 0; i < N; i++) {
        int idxNombre = rand() % nombres.size();
        int idxApellido = rand() % apellidos.size();
        cout << nombres[idxNombre] << " " << apellidos[idxApellido] << endl;
    }
}

int main() {
    int N;
    cout << "Cuantos nombres generar? ";
    cin >> N;
    generarNombres(N);
    return 0;
}