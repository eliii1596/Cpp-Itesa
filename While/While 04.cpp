/*Escribir un diagrama de flujo para un programa que imprima la tabla de
multiplicación del número.*/
#include <iostream>
int main (){
    int i=0;
    int n;
    int c=0;
    std::cout<<"Digite el numero que desea multiplicar"<<std::endl;
    std::cin>>n;
    while(i<50){
        i++;
        c=i*n;
        std::cout<<n<<"x"<<i<<"="<<c<<std::endl;
    }
    return 0;}