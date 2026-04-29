// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarPersonaAleatoria(const vector<string>& nombres,
                             const vector<string>& apellidos,
                             const vector<int>& edades) {
    int idxN = rand() % nombres.size();
    int idxA = rand() % apellidos.size();
    int idxE = rand() % edades.size();

    cout << "Nombre: " << nombres[idxN]
         << " " << apellidos[idxA]
         << ", Edad: " << edades[idxE] << endl;
}

int main() {
    srand(time(0));

    vector<string> nombres = {"Juan", "Maria", "Carlos", "Ana", "Luis",
                              "Elena", "Pedro", "Sofia", "Diego", "Laura"};
    vector<string> apellidos = {"Perez", "Gomez", "Lopez", "Martinez", "Rodriguez",
                                "Fernandez", "Garcia", "Diaz", "Sanchez", "Romero"};
    vector<int> edades = {18, 22, 25, 30, 35, 40, 19, 27, 33, 29};

    int N;
    cout << "Cuantas personas aleatorias desea generar? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        mostrarPersonaAleatoria(nombres, apellidos, edades);
    }

    return 0;
}