#include <iostream>
#include <algorithm>

int main(){
    
    int n;
    std::cout<<"ingrese El numero de estudiantes ";
    std::cin>> n;
    int nombreAlumnos[n];
    int aux[n];

    for (int i = 0; i < n; i++)
    {
        std::cout<<"ingrese el nombre del  alumnos \n";
        std::cin>>nombreAlumnos[i];
        std::cout<<"ingrese la nota del estudiante \n";
        std::cin>>aux[i];
    }
    

    return 0;
} 