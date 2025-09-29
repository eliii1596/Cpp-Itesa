#include <iostream>
int main()
{
    int suma=0;
    int edad[] = {16, 18, 21, 19};
    for (int i = 0; i < 4; i++)
    {
        std::cout << "edades " << edad[i] << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        suma+=edad[i];

    }
    std::cout<<"la suma de las edades es: " <<suma<< "\n";
    
    return 0;
}