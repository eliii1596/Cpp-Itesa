/*/6.Escriba un diagrama de flujo para un programa que imprima los números
del 1 al 3 con su cuadrado.*/
#include <iostream>
int main(){
    int s;
    s=0;
    for(int i=0;i<4;i++){
        std::cout<<"Numero sin cuadrado es "<<std::endl;
        std::cout<<i<<std::endl;
        std::cout<< "El numero con su cuadrado es "<<std::endl;
        s=i*i;
        std::cout<<s<<std::endl;
    }
    return 0;
}