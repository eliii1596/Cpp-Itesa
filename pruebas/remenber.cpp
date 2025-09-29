#include <iostream>

// Prototipo
void suma(int a, int b);
void resta (int a, int b);

int main() {
    int opcion;
    int a=0;
    int b=0;
    do
    {
        std::cout<<"Elija la operacion a realizar: "<<std::endl<<"1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. division \n 5. salir \n";
        std::cin>>opcion;
        switch (opcion)
        {
        case 1:
            std::cout<<"Diga el primer numero a sumar: \n";
            std::cin>>a;
            std::cout<<"Diga el segundo numero a sumar: \n";
            std::cin>>b;
            suma(a,b);
            break;
        
        default:
            break;
        }
    } while (opcion !=5 );
    
    return 0;
}

void suma(int a, int b) {
    int resultado = a + b;
    std::cout << resultado << "\n ";
}

void resta (int a, int b){
    int resultado = a-b;
    std::cout<<resultado<<std::endl<<"\n" ;
}

