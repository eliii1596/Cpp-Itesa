/*6.Escriba un diagrama de flujo para un programa que imprima los números
        del 1 al 3 con su cuadrado.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int i=0;
    int c=0;
    while (i<3){
        i++;
        c= pow(i, 2);
        cout<<"El numero sin elevacion es:"<<endl;
        cout<< i<<endl;
        cout<<"El numero elevado es"<<endl;
        cout<<c<<endl;
        
    }
    return 0;
}