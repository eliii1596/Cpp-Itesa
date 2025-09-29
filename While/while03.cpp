/*7.Escriba un diagrama de flujo para un programa que encuentre e imprima
la sumatoria de los números comprendidos entre el 1 y 20.*/
#include <iostream>
int main (){
    int s=0;
    int i=0;
    
    while(i<20){
        i++;
        s+=i;
        std::cout<<s<<std::endl; 

    }
    
    return 0;
}