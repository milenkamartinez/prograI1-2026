// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 13/04/2026
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

double randomDouble(double min, double max) {
    return min + (double)rand() / RAND_MAX * (max - min);
}

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

char randomAlphanumeric() {
    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int index = rand() % 62;
    return chars[index];
}

void generarVoltajes(vector<double>& v) {
    for (int i = 0; i < 100; i++)
        v.push_back(randomDouble(20.00, 220.00));
}

void generarTemperaturas(vector<double>& v) {
    for (int i = 0; i < 50; i++)
        v.push_back(randomDouble(0.00, 100.00));
}

void generarCaracteres(vector<char>& v) {
    for (int i = 0; i < 30; i++)
        v.push_back(randomAlphanumeric());
}

void generarAnios(vector<int>& v) {
    for (int i = 0; i < 100; i++)
        v.push_back(randomInt(1990, 2025));
}

void generarVelocidades(vector<double>& v) {
    for (int i = 0; i < 32; i++)
        v.push_back(randomDouble(10.00, 300.00));
}

void generarDistancias(vector<double>& v) {
    for (int i = 0; i < 1000; i++)
        v.push_back(randomDouble(1.00, 1000.00));
}

void imprimirDouble(const vector<double>& v, int cols) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << "\t";
        if ((i + 1) % cols == 0) cout << endl;
    }
    cout << endl;
}

int main() {
    srand(time(0));

    vector<double> voltajes, temperaturas, velocidades, distancias;
    vector<char> caracteres;
    vector<int> anios;

    generarVoltajes(voltajes);
    generarTemperaturas(temperaturas);
    generarCaracteres(caracteres);
    generarAnios(anios);
    generarVelocidades(velocidades);
    generarDistancias(distancias);

    cout << "=== Voltajes (100) ===" << endl;
    imprimirDouble(voltajes, 5);

    cout << "=== Temperaturas (50) ===" << endl;
    imprimirDouble(temperaturas, 5);

    cout << "=== Caracteres (30) ===" << endl;
    for (size_t i = 0; i < caracteres.size(); i++) {
        cout << caracteres[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;

    cout << "=== Años (100) ===" << endl;
    for (size_t i = 0; i < anios.size(); i++) {
        cout << anios[i] << "\t";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;

    cout << "=== Velocidades (32) ===" << endl;
    imprimirDouble(velocidades, 4);

    cout << "=== Distancias (1000) ===" << endl;
    imprimirDouble(distancias, 6);

    return 0;
}