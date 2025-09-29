#include <iostream>
#include <string>

class persona {
private: // Atributos
    int edad;
    std::string nombre;
public: // Métodos
    persona(int _edad, std::string _nombre); // Constructor
    void leer();
    void correr();
};

// Constructor
persona::persona(int _edad, std::string _nombre) {
    edad = _edad;
    nombre = _nombre;
}

void persona::leer() {
    std::cout << "Soy " << nombre << " y estoy leyendo un libro" << std::endl;
}

void persona::correr() {
    std::cout << "Soy " << nombre << " y estoy corriendo una maraton" << std::endl;
}

int main() {
    persona p1 = persona(17, "Elias");
    p1.leer();
    p1.correr();
    
    return 0;
}