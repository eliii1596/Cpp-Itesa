/*Realizar el pseudocódigo y el diagrama de flujo según los criterios mostrados a
continuación.*/
#include <iostream>
#include <cstring>
int main(){
    int edad;

    std::cout<<"Ingrese la edad para determinar la etapa "<<std::endl;
    std::cin>>edad;
    std::string etapa1="nene ";
    std::string etapa2="adolescencia ";
    std::string etapa3="adultez ";
    std::string etapa4="tercera edad ";
    if (edad <= 13 && edad >= 5)
    {
        std::cout<<"la etapa es: "<<etapa1<<"\n";
    }
    else if (edad<=17 && edad>=14)
    {
        std::cout<<"la etapa es: "<<etapa2<<"\n";
    }
    else if (edad >=18 && edad<=54)
    {
        std::cout<<"la etapa es: "<<etapa3<<"\n";
    }
    else if (edad>=65)
    {
        std::cout<<"la etapa es: "<<etapa4<<"\n";
    }
    else
    {
        std::cout<<"ingrese valores dontro de lo estqablecido no te flipes e \n";
    }
    
    return 0;
}