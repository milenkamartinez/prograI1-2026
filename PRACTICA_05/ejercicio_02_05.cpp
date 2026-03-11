#include <iostream>
using namespace std;
float aumento_comision(int costo);
float aumento_antiguedad(int antiguedad, float sueldo);
int main()
{
     // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    int n;
    int productos_vendidos;
    int antiguedad;
    float costo;
    float suma=0;
    float sueldo=3300;
    float aumento;
    float aumento_de_antiguedad;
    cout<<"ingrese el numero de vendedoras contratadas: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cout<<"ingrese la cantidad de productos que vendio la vendedora numero "<<i<<": ";
        cin>>productos_vendidos;
        for (int j = 1; j <= productos_vendidos; j++)
        {
            cout<<"ingrese el costo del producto vendido numero "<<j<<": ";
            cin>>costo;
            suma=suma+costo;

        }
        cout<<"ingrese la antiguedad en anios de la vendedora numero "<<i<<": ";
        cin>>antiguedad;
        aumento=aumento_comision(costo);
        sueldo=sueldo+aumento;
        aumento_de_antiguedad=aumento_antiguedad(antiguedad, sueldo);
        cout<<"el sueldo de la vendera numero "<<i<<" es: "<<sueldo+aumento_de_antiguedad<<endl;
    }
    return 0;
}
float aumento_comision(int costo)
{
    float aumento;
    float aumento_comision;
    aumento=costo*0.1;
    return aumento;
}
float aumento_antiguedad(int antiguedad, float sueldo)
{
    float sueldo_total;
    if (antiguedad>=5)
    {
        sueldo_total=500;
    }
    else if (antiguedad>=3)
    {
        sueldo_total=300;
    }
    else if (antiguedad==2)
    {
        sueldo_total=200;
    }
    return sueldo_total;
}