/*Explora el concepto de herencia según tu lenguaje. Crea un ejemplo que
 * implemente una superclase Animal y un par de subclases Perro y Gato,
 * junto con una función que sirva para imprimir el sonido que emite cada Animal.*/

#include <iostream>
#include <string>
    class animal
    {
    public:
      void sonido(){
        std::cout<<"Este animal no tiene un sonido en especifico";
      }
    };

    class perro :public animal{
        void ladrar(){
            std::cout<<"El perro ladra";
        }
    };

    class gato :public animal{
        void maullar(){
            std::cout<<"el gato maulla";
        }
    };


int main()
{

    return 0;
}