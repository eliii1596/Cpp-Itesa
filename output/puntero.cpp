#include <iostream>
#include <conio.h>
int main (){
    /*dir: Este es un operador de indirección o desreferenciación. Se utiliza para acceder al valor almacenado en la dirección de memoria apuntada por un puntero.*/

    /*ptr accede al valor almacenado en la dirección de memoria apuntada por ptr.
dir: Simplemente, es el nombre del puntero. Representa la dirección de memoria de una variable*/

    /*&n: Este es el operador de dirección y se utiliza para obtener la dirección de memoria de una variable*/
    int n=10;
    int *ptr;
    ptr=&n;
    std::cout<<"el numero es "<<*ptr<<std::endl;
    std::cout<<"la memoria es "<<&n<<std::endl;
    getch();
    return 0;
}