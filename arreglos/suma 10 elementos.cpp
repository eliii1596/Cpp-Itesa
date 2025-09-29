#include <iostream>
int main (){
    int suma=0;
    int elementos[10]={1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i < 9; i++)
    {
        suma+=elementos[i];
    }
    std::cout<<"la suma de elementos es: "<<suma<<"\n";
    
    return 0;
}