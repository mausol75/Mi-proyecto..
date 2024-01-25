//imprimir direccion
//un puntero almacena direcciones
#include <iostream>
using namespace std;
int main(){
   int x=5;
   int *p;

   p=&x;

   cout<<"Valor de x:\n"<<x<<endl;
   cout<<"Direccion:\n"<<&x<<endl;

   cout<<"Direccion de p:\n"<<p<<endl;
   cout<<"Valor de p:\n"<<*p<<endl;

    return 0;
}
