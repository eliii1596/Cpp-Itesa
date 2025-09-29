#include <iostream>
int main (){
    int niv,sueldo,aument,nuev =0;
    std::cout<<"que nivel de maestro es: "<<std::endl<<1<<std::endl<<2<<std::endl<<3<<std::endl<<4<<std::endl;
    std::cin>>niv;
    std::cout<<"cuanto cobra actualmente¿?"<<std::endl;
    std::cin>>sueldo;
    if(niv==1)
    {
        aument=sueldo*0.01;
        nuev=sueldo+aument;
        std::cout<<"Su nuevo sueldo es de: "<<nuev<<std::endl;
    }
    else if (niv==2)
    {
        aument=sueldo*0.1;
        nuev=sueldo+aument;
        std::cout<<"Su nuevo sueldo es de: "<<nuev<<std::endl;
    }
    else if (niv==3)
    {
         aument=sueldo*0.15;
        nuev=sueldo+aument;
        std::cout<<"Su nuevo sueldo es de: "<<nuev<<std::endl;
    }
    else if (niv==4)
    {
        aument=sueldo*0.20;
        nuev=sueldo+aument;
        std::cout<<"Su nuevo sueldo es de: "<<nuev<<std::endl;
    }
    else{
        std::cout<<"ingrese valores dentro de rango"<<std::endl;
    }
    
    
    
    return 0;
}