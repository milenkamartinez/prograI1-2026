#include <iostream>
using namespace std;
int main()
{
// Materia: Programación I, Paralelo 4
// Autor: Milenka Dayana Martinez Lazaro.
// Carnet: 14184761.
// Carrera del estudiante: Ing. Biomedica.
// Fecha creación: 11/02/2026
system("cls");
int numero_mes;
cout<<"ingrese un numero del 1-12: "; cin>>numero_mes; cout<<endl;
switch (numero_mes)
{
case 1: 
cout<<"enero"<<endl;
    break;

case 2:
cout<<"febrero"<<endl;
    break;

case 3:
cout<<"marzo"<<endl;
    break;

case 4:
cout<<"abril"<<endl;
    break;

case 5:
cout<<"mayo"<<endl;
    break;

case 6:
cout<<"junio"<<endl;
    break;

case 7:
cout<<"julio"<<endl;
    break;

case 8:
cout<<"agosto"<<endl;
    break;

case 9:
cout<<"septiembre"<<endl;
    break;

case 10:
cout<<"octubre"<<endl;
    break;

case 11:
cout<<"noviembre"<<endl;
    break;

case 12:
cout<<"diciembre"<<endl;
    break;

default:
    break;
}
    return 0;
}
