// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 29/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void llenarCalificaciones(vector<int>& calif, int N) {
    for (int i = 0; i < N; i++) {
        calif.push_back(rand() % 101);
    }
}

void calcularPorcentajes(const vector<int>& calif, int N) {
    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;

    for (size_t i = 0; i < calif.size(); i++) {
        if (calif[i] >= 0 && calif[i] <= 59) reprobado++;
        else if (calif[i] >= 60 && calif[i] <= 79) regular++;
        else if (calif[i] >= 80 && calif[i] <= 89) bueno++;
        else if (calif[i] >= 90 && calif[i] <= 100) excelente++;
    }

    cout << "Reprobado (0-59): " << (reprobado * 100.0 / N) << "%" << endl;
    cout << "Regular (60-79): " << (regular * 100.0 / N) << "%" << endl;
    cout << "Bueno (80-89): " << (bueno * 100.0 / N) << "%" << endl;
    cout << "Excelente (90-100): " << (excelente * 100.0 / N) << "%" << endl;
}

int main() {
    srand(time(0));
    int N;
    cout << "Cantidad de estudiantes: ";
    cin >> N;

    vector<int> calificaciones;
    llenarCalificaciones(calificaciones, N);
    calcularPorcentajes(calificaciones, N);

    return 0;
}