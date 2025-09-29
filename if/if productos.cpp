#include <iostream>
int main (){
    /* Un cliente compra un producto. Si el precio del producto es mayor a $1500, se
le aplica un descuento del 15%. Si el cliente es miembro del club de fidelización,
se le aplica un descuento adicional del 10%. ¿Cuánto debe pagar el cliente por
el producto?*/
int producto, miembro, descuento1,descuento2;
std::cout<<"El producto que compró supera los 1500?, ingrese el valor de su producto";
 std::cin>>producto;
 std::cout<<"eres miembro del club de fidelizacion? no(0) si(1)";
 std::cin>>miembro;
 float des;
 if (producto>=1500 && miembro==1)
 {
    des=producto*0.25;
    std::cout<<"El total a pagar es:"<<des<<std::endl;
 }
 else if(miembro==1){
    descuento2=producto*0.1;
    std::cout<<"el total a pagar es: "<<descuento2<<std::endl;
 }
 else if (producto>=1500)
 {
    descuento1=producto*0.15;
    std::cout<<"El total a pagar es:"<<descuento1<<std::endl;
 }
 
 else{
    std::cout<<"el total a pagar es "<<producto<<std::endl;
 }
 

    return 0;
} 