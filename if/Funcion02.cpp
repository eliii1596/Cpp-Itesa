#include <iostream>
void eli(int x,int z){
    if(x>z){
        std::cout<<"El numero"<<x<<std::endl<<"Es mayor que"<<z<<std::endl; 
    }
    else {
        std::cout<<"el numero "<<z<<std::endl<<"es mayor que "<<x<<std::endl;
    }
}
int main(){
    int m,n=0;
    std::cout<<"ingrese un numero ";
    std::cin>>n;
    std::cout<<"ingrese el segundo numero";
    std::cin>>m;
    eli(n,m);
    return 0;
}