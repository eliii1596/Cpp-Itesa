#include <iostream>

int main()
{
    int i{1};
    int suma{0};

    do
    {
        suma += i;
        i++;
    } while (i <= 20);

    std::cout << suma;
    return 0;
}