// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 13/04/2026
// Número de ejercicio: 3
#include <iostream>
#include <vector>

using namespace std;

double sumaVector(const vector<int>& v) {
    double s = 0;
    for (size_t i = 0; i < v.size(); i++)
        s += v[i];
    return s;
}

double promedioVector(const vector<int>& v) {
    return sumaVector(v) / v.size();
}

void desviacionesVector(const vector<int>& v, double prom, vector<double>& desv) {
    for (size_t i = 0; i < v.size(); i++)
        desv.push_back(v[i] - prom);
}

double varianzaVector(const vector<double>& desv) {
    double sumaCuad = 0;
    for (size_t i = 0; i < desv.size(); i++)
        sumaCuad += desv[i] * desv[i];
    return sumaCuad / desv.size();
}

int main() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    vector<int> calificaciones(N);
    for (int i = 0; i < N; i++) {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
    }

    double suma = sumaVector(calificaciones);
    double promedio = promedioVector(calificaciones);
    vector<double> desviacion;
    desviacionesVector(calificaciones, promedio, desviacion);
    double varianza = varianzaVector(desviacion);

    cout << "\nSuma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Calificacion\tDesviacion" << endl;
    for (size_t i = 0; i < calificaciones.size(); i++) {
        cout << calificaciones[i] << "\t\t" << desviacion[i] << endl;
    }
    cout << "Varianza: " << varianza << endl;

    return 0;
}
