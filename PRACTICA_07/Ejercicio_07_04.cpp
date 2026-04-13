// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 13/04/2026
// Número de ejercicio: 4
#include <iostream>
#include <vector>

using namespace std;

void multiplicarVectores(const vector<int>& a, const vector<int>& b, vector<int>& res) {
    for (size_t i = 0; i < a.size(); i++)
        res.push_back(a[i] * b[i]);
}

int main() {
    int N;
    cout << "Dimension N: ";
    cin >> N;

    vector<int> v1(N), v2(N), producto;

    cout << "Vector 1:" << endl;
    for (int i = 0; i < N; i++) cin >> v1[i];

    cout << "Vector 2:" << endl;
    for (int i = 0; i < N; i++) cin >> v2[i];

    multiplicarVectores(v1, v2, producto);

    cout << "Multiplicacion elemento a elemento:" << endl;
    for (size_t i = 0; i < producto.size(); i++)
        cout << producto[i] << " ";
    cout << endl;

    return 0;
}
