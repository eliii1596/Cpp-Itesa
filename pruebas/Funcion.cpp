#include <iostream>

void elevar(int a,int b){
    int elevado;
    elevado=0;
    int e=0;

for (int i=0; i<b; i++)
    {
    
    elevado=elevado+e;
    e=a*a;
    } 
std::cout<<elevado<<std::endl;
}
int main (){
    int c,d;
    std::cout<<"digit el numero que desea elevar"<<std::endl;
    std::cin>>c;
    std::cout<< "Digite a cuanto desea elevarlo"<<std::endl;
    std::cin>>d;

elevar(c,d);
    return 0;
}