#include <iostream>

int main() {

    int num{ 2 };
    int factorial = { 1 };
    int i = { 1 };

    do 
    {
        factorial *= i;
        i++;
    } while (i <= num);

    std::cout << num << "\t" << factorial << std::endl;

    return 0;
}