// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 13/04/2026
// Número de ejercicio: 6
#include <iostream>
#include <vector>

using namespace std;

void sumarVectores(const vector<int>& a, const vector<int>& b, vector<int>& res) {
    for (size_t i = 0; i < a.size(); i++)
        res.push_back(a[i] + b[i]);
}

int main() {
    const int TAM = 5;
    vector<int> vector1(TAM), vector2(TAM), vector3;

    cout << "Vector1 (5 enteros):" << endl;
    for (int i = 0; i < TAM; i++) cin >> vector1[i];

    cout << "Vector2 (5 enteros):" << endl;
    for (int i = 0; i < TAM; i++) cin >> vector2[i];

    sumarVectores(vector1, vector2, vector3);

    cout << "vector3 = vector1 + vector2:" << endl;
    for (int i = 0; i < TAM; i++)
        cout << vector3[i] << " ";
    cout << endl;

    return 0;
}