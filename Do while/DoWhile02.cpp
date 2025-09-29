#include <iostream>

int main()
{

    int i{1};

    do
    {

        std::cout << i << "\t" << i * i << std::endl;

        i++;
    } while (i <= 3);

    return 0;
}