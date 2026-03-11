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
int a; int b; int c; int d;
cout<<"ingrese el primer numero: "; cin>>a; cout<<endl;
cout<<"ingrese el segundo numero: "; cin>>b; cout<<endl;
cout<<"ingrese el tercer numero: "; cin>>c; cout<<endl;
cout<<"ingrese el cuarto numero: "; cin>>d; cout<<endl;
if(d==a || d==b || d==c){
    cout<<"el numero que ingreso ya se repitio anteriormente";
} else{
    cout<<"ningun numero se repitio";
}
    return 0;
}
