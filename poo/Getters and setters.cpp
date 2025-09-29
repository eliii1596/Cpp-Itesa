#include <iostream>

class Punto
{
private:
    int x;
    int y;
public:
    Punto();
    void setPunto(int,int);
    int getPuntoX();
    int getPuntoY();
    
};

Punto::Punto()
{
}

void Punto::setPunto(int _x, int _y)
{
    x =_x;
    y =_y;
}

int Punto::getPuntoX()
{
    return x;
}

int Punto::getPuntoY(){
    return y;
}

int main()
{
    Punto punto1;
    punto1.setPunto(10,15);
    std::cout<<punto1.getPuntoX()<<std::endl;
    std::cout<<punto1.getPuntoY()<<std::endl;


    return 0;
}