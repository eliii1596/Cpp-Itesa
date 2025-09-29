#include <iostream>
#include <vector>
int main ()
{
    int s =0;
     int num[]={5,2,3,1,4};
     for (int i =0; i<5;i++)
     {
        s+=num[i];
     };
     std::cout<<s<<"\n";
    return 0;
}