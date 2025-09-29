#include <iostream>
#include <conio.h>
using namespace std;
int numeromax(int x, int y)
{ 
    int numeromax;
    if(x>=y)
    {
        numeromax=x;
    }
    else
    {
         numeromax=y;
    }
    
    return numeromax;
}


int main()
{
    int n1,n2;
    cout<<"digite 2 numeros";
    cin>>n1>>n2;
    numeromax(n1,n2);
    getch();
    return 0;
}