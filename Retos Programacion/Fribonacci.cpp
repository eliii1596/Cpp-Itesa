/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */
#include <iostream>
int main()
{
    int a=0, s=1, t;
    for (int i=0; i<50; i++)
    {
        std::cout<<a<<std::endl;
        t=a+s;
        a=s;
        s=t;
    }
    return 0;
}