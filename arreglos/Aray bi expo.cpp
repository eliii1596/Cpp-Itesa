#include <iostream>
int main (){
int bidi[5][5]{
{8,1,5,7,3},
{9,2,3,4,6}
};
for(int f=0;f<5;f++){
    for(int c=0;c<5;c++){
        std::cout<<bidi[f][c]<<std::endl;
}
}

return 0;
}
