/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma automática.
 * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"
 */
#include <iostream>
#include <string>

int main ()
{
    std::string texto;
    std::cout<<"ingrese un texto \n";
    std::getline(std::cin, texto);

    for (int i = texto.size()-1; i >= 0; i--)
    {
        std::cout<<texto[i];
    }
    std::cout<<std::endl;
    return 0;
}