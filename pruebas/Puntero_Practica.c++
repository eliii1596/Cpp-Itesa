#include <iostream>

int main() {
    // Declaración de una variable entera
    int numero = 10;

    // Declaración de un puntero a entero
    int *puntero;

    // Asignación del puntero a la dirección de memoria de la variable 'numero'
    puntero = &numero;

    // Imprime el valor de la variable 'numero'
    std::cout << "Valor de la variable numero: " << numero << std::endl;

    // Imprime la dirección de memoria de la variable 'numero' a través del puntero
    std::cout << "Dirección de memoria de la variable numero: " << puntero << std::endl;

    // Imprime el valor almacenado en la dirección de memoria apuntada por 'puntero'
    std::cout << "Valor almacenado en la dirección de memoria apuntada por el puntero: " << *puntero << std::endl;

    return 0;
}
