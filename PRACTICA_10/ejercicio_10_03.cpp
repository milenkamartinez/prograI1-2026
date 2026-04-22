// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 22/04/2026
// Número de ejercicio: 3
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void limpiarBitacora(vector<string> &registros, char caracterProhibido, int &correccionesRealizadas) {
    correccionesRealizadas = 0;
    
    for (size_t i = 0; i < registros.size(); i++) {
        for (size_t j = 0; j < registros[i].length(); j++) {
            if (registros[i][j] == caracterProhibido) {
                registros[i].erase(j, 1);
                correccionesRealizadas++;
                j--; 
            }
        }
    }
}

int main() {
    vector<string> registros = {"Juan#", "Ma$ria", "Ca*rlos", "Ana", "Lui%s"};
    char prohibido = '$';
    int correcciones;
    
    cout << "=== ANTES ===" << endl;
    for (const auto &r : registros) cout << r << endl;
    
    limpiarBitacora(registros, prohibido, correcciones);
    
    cout << "\n=== DESPUES ===" << endl;
    for (const auto &r : registros) cout << r << endl;
    
    cout << "Correcciones realizadas: " << correcciones << endl;
    
    return 0;
}
