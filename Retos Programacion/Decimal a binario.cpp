/*
 * Crea un programa se encargue de transformar un número
 * decimal a binario sin utilizar funciones propias del lenguaje que lo hagan directamente.
 */
#include <iostream>
#include <vector>
int main()
{
    int numero;
    std::vector<int> binario;
    std::cout<<"introduce el numero: ";
    std::cin>>numero;
    while (numero>0)
    {
        binario.push_back(numero%2);
        numero/=2;
    }
    for (int i = binario.size()-1; i >= 0; i--)
    {
        std::cout<<binario[i];
    }
    return 0;
    
}