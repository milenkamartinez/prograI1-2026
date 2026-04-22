// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro
// Fecha creación: 22/04/2026
// Número de ejercicio: 4
#include <iostream>
#include <string>
using namespace std;

const int CIUDADES = 4;
const int DIAS = 7;

void analizarClima(float datos[CIUDADES][DIAS], int ciudadIdx, 
                   float &maxima, float &minima, float &promedio) {
    maxima = datos[ciudadIdx][0];
    minima = datos[ciudadIdx][0];
    float suma = 0;
    
    for (int d = 0; d < DIAS; d++) {
        float temp = datos[ciudadIdx][d];
        if (temp > maxima) maxima = temp;
        if (temp < minima) minima = temp;
        suma += temp;
    }
    
    promedio = suma / DIAS;
}

int main() {
    float temperaturas[CIUDADES][DIAS] = {
        {25, 26, 27, 28, 29, 30, 31}, 
        {15, 16, 17, 18, 19, 20, 21}, 
        {30, 31, 32, 33, 34, 35, 36}, 
        {10, 11, 12, 13, 14, 15, 16}  
    };
    
    string nombresCiudades[CIUDADES] = {"La Paz", "Santa Cruz", "Cochabamba", "Sucre"};
    string ciudadBuscada;
    
    cout << "Ingrese nombre de ciudad: ";
    cin >> ciudadBuscada;
    
    int indice = -1;
    for (int i = 0; i < CIUDADES; i++) {
        if (nombresCiudades[i] == ciudadBuscada) {
            indice = i;
            break;
        }
    }
    
    if (indice == -1) {
        cout << "Ciudad no encontrada" << endl;
        return 1;
    }
    
    float maxTemp, minTemp, promTemp;
    analizarClima(temperaturas, indice, maxTemp, minTemp, promTemp);
    
    cout << "Ciudad: " << ciudadBuscada << endl;
    cout << "Temperatura máxima: " << maxTemp << endl;
    cout << "Temperatura mínima: " << minTemp << endl;
    cout << "Promedio semanal: " << promTemp << endl;
    
    return 0;
}