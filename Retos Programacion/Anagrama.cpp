#include <iostream>
#include <string>
#include <algorithm>
/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */
int main()
{ 
    std::string palabra, inversa;
    std::cout<<"ingresa una palabra\n";
    std::cin>>palabra;
    std::cout<<"Ingresa la palabra alrevez \n";
    std::cin>>inversa;
    
    std::reverse(inversa.begin(), inversa .end());
    if (palabra==inversa)
    {
        std::cout<<"La palabra es un anagrama \n";
    }
    else
    {
        std::cout<<"La palabra no es un anagrama \n";
    }
    
    return 0;
}