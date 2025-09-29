#include <iostream>
int main (){
    int n,s=0;
    std::cout<<"Digite el numero que desea multiplicar";
    std::cin>>n;

    for(int i=1;i<13;i++){
        s=n*i;
        std::cout<<n<<"x"<<i<<"="<<s<<std::endl;

    }




    return 0;
}