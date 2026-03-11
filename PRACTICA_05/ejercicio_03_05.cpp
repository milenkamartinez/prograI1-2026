#include <iostream>
using namespace std;
float costo_hora_extra(float tarifa);
float bonificacion(int horas_extra, float tarifa);
int main()
{
     // Materia: Programación I, Paralelo 4
    // Autor: Milenka Dayana Martinez Lazaro.
    // Carnet: 14184761.
    // Carrera del estudiante: Ing. Biomedica.
    // Fecha creación: 11/03/2026
    system("cls");
    float bonificacion_total;
    int horas_extra;
    float tarifa;
    float sueldo;
    float sueldo_total;
    cout<<"ingrese cuantas horas extras trabajo este mes: ";
    cin>>horas_extra;
    cout<<"ingrese la tarifa por hora que recibe en su sueldo: ";
    cin>>tarifa;
    sueldo=tarifa*720;//lo multiplico por 720 ya que es el promedio de horas en un mes
    bonificacion_total=bonificacion(horas_extra, tarifa);
    sueldo_total=sueldo+bonificacion_total;
    cout<<"el sueldo total mas sus horas extra trabajadas es de: "<<sueldo_total<<" bs";
    return 0;
}
float costo_hora_extra(float tarifa)
{
    int hora_extra=2*tarifa;
    return hora_extra;
}
float bonificacion(int horas_extra, float tarifa)
{
    float bonificacion;
    int costo_horas_extras=costo_hora_extra(tarifa);
    bonificacion=tarifa+(horas_extra*costo_horas_extras);
    return bonificacion;
}

