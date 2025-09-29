#include <iostream>

int main ()
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << i << "\t" << "fizzbuzz\n";
        }

        else if (i%3==0)
        {
            std::cout<<i<<"\t"<<"Fizz\n";
        }
        
        else if (i%5==0)
        {
            std::cout<<i<<"\t"<<"buzz \n";
        }

        else if (i%3==0 || i%5==0)
        {
            std::cout<<i<<"\t"<<"fizzbuzz\n";
        }

        else
        {
            std::cout<<i<<"\n";
        }
        
    }
    
    return 0;
}