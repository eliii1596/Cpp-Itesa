/*0.Escribir un diagrama de flujo para un programa que calcule e imprima la
factorial del número 2.
*/
#include <iostream>
int main (){
    int f=0;
    int i=0;
    int p=1;
    int s=0;
    while (i<6){
        i++;
        f=p+s;
        std::cout<<f << std:: endl;
        s=p;
        p=f;
    }
    return 0;
}