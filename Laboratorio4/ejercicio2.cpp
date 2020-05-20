#include <iostream>

using namespace std;

int main(){
    //se declaran variables
    int numero1, par =0;
    
    //se le explica al usuario lo que tiene que hacer 
    cout<<"\nEl siguiente programa verifica si un numero es par o es impar";
    cout<<endl<<endl;
    cout<<"Digite un numero: "; cin>>numero1;
    cout<<endl;
    
    //se saca el residuo de la division del numero entre dos para ver si es par o impar 
    par = numero1%2;

    //se usa la condicion que evalua si el numero es par o es impar
    if(par==0){
        cout<<numero1<<" es un numero par"<<endl<<endl;
    }else{
        cout<<numero1<<" es un numero impar"<<endl<<endl;
    }
    

   return 0;
}