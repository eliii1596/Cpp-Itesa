#include <iostream>
using namespace std;

class Fecha
{
    private:
    int dia, mes, anio;

    public:
    Fecha(int, int, int );//constructor1
    Fecha(long);//constructor 2

    void mostrarFecha();

};

Fecha::Fecha(int _dia, int _mes, int _anio)
{
     dia= _dia;
     mes= _mes;
     anio= _anio;
}
Fecha::Fecha(long fecha)
{
    anio=int(fecha /10000);
    mes=int((fecha-anio*10000)/100);
    dia=int(fecha-anio*10000-mes*100);
}
void Fecha::mostrarFecha(){
    std::cout<<"la Fecha es  "<<dia<<" "<<mes<<" "<<anio<<std::endl;
}
int main ()
{
    Fecha hoy (20240711);
    Fecha ayer (10, 7, 2024);
    hoy.mostrarFecha();
    ayer.mostrarFecha();
    return 0;
}