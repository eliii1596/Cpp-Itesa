#include<iostream>
#include <string>
class gato
{
private:
    std::string nombre;
    int edad;
public:
    gato(std::string _nombre, int _edad);
    void maullar();
    void comer();
    ~gato();
};

gato::gato(std::string _nombre, int _edad)
{
    nombre=_nombre;
    edad=_edad;
}

gato::~gato()
{
}

void gato::maullar()
{
    std::cout<<nombre<<"  esta maullando "<<" miau miau \n";
}

void gato::comer()
{
     std::cout<<nombre<<"  esta comiendo  \n  ";
}


int main()
{
    gato g1("namorau",10);
    g1.maullar();

    return 0;
}
