/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */
#include <iostream>
int main()
{
    int contador=0;

    for (int i = 0; i < 100; i++)
    {
       if (i==0 || i==1)
       {
           continue;
       }
         for (int j = 2; j < i; j++)
         {
              if (i%j==0)
              {
                contador++;
              }
         }
            if (contador==0)
            {
                std::cout<<i<<" es primo\n";
            }
            contador=0;

    }
    
    return 0;
}