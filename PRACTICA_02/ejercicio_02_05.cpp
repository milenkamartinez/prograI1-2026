#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;
int main()
{
// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro.
// Carnet: 14184761.
// Carrera del estudiante: Ing. Biomedica.
// Fecha creación: 25/02/2026
system("cls");
int numero_secreto;
int intento;
int intentos_realizados;
intentos_realizados=0;
srand(time(0));  
numero_secreto = rand() % 100 + 1;  
cout << "Piensa en un número entre 1 y 100" << endl;
do {
    intentos_realizados++;
    cout << "Intento #" << intentos_realizados << ": ";
    cout << "¿Tu número es " << numero_secreto << "? (0=no, 1=sí): ";
    cin >> intento;
    if (intento == 0) {
        char pista;
        cout << "¿El número es mayor o menor? (m=mayor, n=menor): ";
        cin >> pista;
        if (pista == 'm') {
            int rango_min = numero_secreto + 1;
            int rango_max = 100;
            numero_secreto = rand() % (rango_max - rango_min + 1) + rango_min;
        }
        else if (pista == 'n') {
            int rango_min = 1;
            int rango_max = numero_secreto - 1;
            numero_secreto = rand() % (rango_max - rango_min + 1) + rango_min;
        }
    }
} while (intento != 1);
cout << "¡Adiviné tu número en " << intentos_realizados << " intentos!" << endl;
return 0;
}