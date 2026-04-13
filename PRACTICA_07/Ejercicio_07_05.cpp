// Materia: Programación I, Paralelo 4 
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 13/04/2026
// Número de ejercicio: 5
#include <iostream>
#include <vector>

using namespace std;

void combinarVectores(const vector<int>& a, const vector<int>& b, vector<int>& res) {
    for (size_t i = 0; i < a.size(); i++)
        res.push_back(a[i]);
    for (size_t i = 0; i < b.size(); i++)
        res.push_back(b[i]);
}

int main() {
    int N;
    cout << "Dimension N: ";
    cin >> N;

    vector<int> v1(N), v2(N), combinado;

    cout << "Vector 1:" << endl;
    for (int i = 0; i < N; i++) cin >> v1[i];

    cout << "Vector 2:" << endl;
    for (int i = 0; i < N; i++) cin >> v2[i];

    combinarVectores(v1, v2, combinado);

    cout << "Vector combinado:" << endl;
    for (size_t i = 0; i < combinado.size(); i++)
        cout << combinado[i] << " ";
    cout << endl;

    return 0;
}
