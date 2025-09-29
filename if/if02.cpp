/*Realizar el pseudocódigo y el diagrama de flujo para calcular el promedio de dos
notas de un estudiante y desplegara un mensaje acuerdo al criterio establecido
en la tabla mostrada según el rango que esta tabla especifica*/
#include <iostream>
int main(){
    int n1,n2,r=0;
    std::cout<<"ingrese la nota 1"<<std::endl;
    std::cin>>n1;
    if(n1>100)
    {
        std::cout<<"no se puede mayor que 100, intentelo otra vez"<<std::endl;
        return 0;
    }
    
    std::cout<<"ingrese la nota 2"<<std::endl;
    std::cin>>n2;
      if (n2<=0)
    {
        std::cout<<"no se puede ingresar una nota menor que 0, intentalo otra vez"<<std::endl;
        return 0;
    }
    
    r=(n1 + n2)/2;
    
    if(r<=100 && r>=90){
        std::cout<<"aprobado, Excelente"<<std::endl<<r<<std::endl;
    }
    else if (r>=80 && r<=89)
    {
        std::cout<<"aprobado, muy Bueno"<<std::endl<< r << std::endl;
    }
    else if  (r>=70 && r<=79)
    {
        std::cout<<"aprobado, Bueno"<<std::endl<<r<<std::endl;
    }
    else if (r>=60 && r<=69){
            std::cout<<"Suficiente para pasar"<<std::endl<<r<<std::endl;
    }
    else{
        std::cout<<"reprobadisimo"<<std::endl<<r<<std::endl;
    }

return 0;    
}