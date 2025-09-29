#include <iostream>
#include <string>
#include <algorithm>
/*void ordenar(int notas[],int numnotas)
{
    for (int i = 0; i <numnotas - 1;  i++)
    {
        for (int j = 0; j <numnotas-i ; j++)
        {
            if (notas[j]>notas[j+1])
            {
                int cam= notas[j];
                notas[j]=notas[j+1];
                notas[j+1]=cam;

                std::cout << "las notas ordenadas de menor a mayor son: "<<notas[j];
            }
            
        }
        
    }
    //std::cout<<"las notas ordenadas de menor a mayor son: "<<
    
}*/
int main (){
    
    int alumnos;
    std::cout<<"ingrese El numero de estudiantes ";
    std::cin>> alumnos;
    std::string nombreAlumnos[alumnos];
    int aux[alumnos];

    for (int i = 0; i < alumnos; i++)
    {
        std::cout<<"ingrese el nombre del  alumno \n";
        std::cin>>nombreAlumnos[i];
        std::cout<<"ingrese la nota del estudiante \n";
        std::cin>>aux[i];
    }

    std::sort (aux, aux +alumnos);
    for (int i = 0; i < alumnos; i++)
    {
        std::cout<<"La nota de los alumnos ordenadas es: "<<aux[i]<<"\n";
    }
    
    

    return 0;
}