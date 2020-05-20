#include <iostream>

using namespace std;

int main(){
    //se declaran variables
    float numero1;
    
    //se le explica al usuario lo que tiene que hacer 
    cout<<"\nEl siguiente programa verifica si un numero es negativo, positivo o si es cero";
    cout<<"\n\n";
    cout<<"Digite un numero: "; cin>>numero1;
    cout<<"\n";
    
    cout<<"el numero que usted digito es "<<numero1<<". ";

    if(numero1>0){
        cout<<"Y "<<numero1<<" es un numero positivo\n\n";
    }
    if(numero1==0){
        cout<<"Por lo tanto el numero es cero\n\n";
    }
    if(numero1<0){
        cout<<"Y "<<numero1<<" es un numero negativo\n\n";
    }
    

   return 0;
}