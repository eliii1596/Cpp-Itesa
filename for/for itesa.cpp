#include <iostream>
#include <conio.h>
#include <string>
int main()
{
    std::string nombres[]={"Yeury Gesualdo"," Engels Marte"," Elias Martinez"," Jesus Alvarez"," Harlen Perez"};
    float SueldoB[]={30.000,60.000,25.500,50.000,40.000};
    float Descuento[]={3.000,10.000,2.500,5.000,3.000}
    float totalNeto=0;
    float totalBruto=0;
    float totalDescuentos=0;
    float SueldoNeto=0;

    for (int i = 0; i < 6; i++)
    {
        SueldoNeto=(SueldoB[i]-Descuento[i]);
        totalBruto=(SueldoB[i]+SueldoB[i]);
        
    }
    
    getch();
    return 0;
}