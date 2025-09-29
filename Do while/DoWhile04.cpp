#include <iostream>

int main()
{

    int i{1};
    int num{};

    std::cin >> num;

    do
    {
        std::cout << num << " x " << i << " = " << num * i << std::endl;

        i++;
    } while (i <= 12);

    return 0;
}