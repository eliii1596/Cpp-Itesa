#include <iostream>
int main(){
    int vec1[4]={1,4,6,8};
    int vec2[4]={7,69,33,21};
    int vsum[4];
    for(int i=0;i<4;i++)
    {
        vsum[i]=vec1[i]+vec2[i];
    }
    for ( int i = 0; i < 4; i++)
    {
        std::cout<<vsum[i]<<"  ";
    }
    std::cout<<std::endl;
    
    return 0;
}