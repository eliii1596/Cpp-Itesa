#include <iostream>
#include <string>

class perro
{
private://atributos / caracteristicas
 std::string raza;
 int edad;
 std::string nombre;

public://metodos / acciones
    perro(std::string _Raza, int _Edad, std::string _Nombre);// constructor
    void ladrar();
    void comer();
    void correr();
};

perro::perro(std::string _Raza, int _Edad, std::string _Nombre)//constructor
{
  raza=_Raza;
  edad=_Edad;
  nombre=_Nombre;

}

void perro::ladrar()//acciones / llamadas de metodos
{
    std::cout<<"wau wau wau wau wau \n";
}
void perro::comer()
{
    std::cout<<nombre<<"Esta comiendo \n"<<"wau wau \n";
}

void perro::correr()
{
    std::cout<<nombre<<" Esta corriendo \n"<<nombre<<" ha dejado de correr \n";
}

int main()
{
    std::cout<<"Ingrese la raza del perro: ";
    std::string raza;
    std::cin>>raza;
    std::cout<<"Ingrese la edad del perro: ";
    int edad;
    std::cin>>edad;
    std::cout<<"Ingrese el nombre del perro: ";
    std::string nombre;
    std::cin>>nombre;

    perro benito= perro(raza,edad,nombre);
    benito.comer();

    return 0;
}