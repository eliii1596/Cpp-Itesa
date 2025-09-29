/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */
#include <iostream>
#include <string>
#include <cmath>

int main ()
{
    std::string poligono;
    std::cout<<"Ingresa el polígono del que deseas calcular el área\n";
    std::cin>>poligono;
    if (poligono=="triangulo")
    {
        float base, altura;
        std::cout<<"ingrese la base del triangulo \n";
        std::cin>>base;
        std::cout<<"ingrese la altura del triangulo \n";
        std::cin>>altura;
        std::cout<<"El área del triangulo es: "<<(base*altura)/2<<std::endl;

    }
    else if (poligono=="cuadrado")
    {
        float lado;
        std::cout<<"ingrese el lado del cuadrado \n";
        std::cin>>lado;
        std::cout<<"El área del cuadrado es: "<<lado*lado<<std::endl;
    }
    else if (poligono=="rectangulo")
    {
        float base, altura;
        std::cout<<"ingrese la base del rectangulo \n";
        std::cin>>base;
        std::cout<<"ingrese la altura del rectangulo \n";
        std::cin>>altura;
        std::cout<<"El área del rectangulo es: "<<base*altura<<std::endl;
    }
    else
    {
        std::cout<<"Poligono no soportado\n";
    }
    
    return 0;
}