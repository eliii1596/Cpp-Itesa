/*. Realizar el pseudocódigo y el diagrama de flujo para calcular el promedio de dos
notas de un estudiante y si em promedio es mayor o igual a 60 imprimir el
promedio y un mensaje que aprobado de lo contario desplegar un mensaje
desaprobado.*/
#include <iostream>
int main (){
    int n1,n2,r=0;
    std::cout<<"ingrese la nota 1"<<std::endl;
    std::cin>>n1;
    std::cout<<"ingrese la nota 2"<<std::endl;
    std::cin>>n2;
    r=(n1+n2)/2;
    if(r<=59){
        std::cout<<"Reprobado"<<std::endl<<r<<std::endl;
    }
    else{
            std::cout<<"Aprobado"<<std::endl<<r<<std::endl;
        }

    return 0;
}