#include <iostream>

using namespace std;

int main(){
    int encontrar = 47,numero;
    cout<<"\nDigita un numero entre 1-100\n\n";
    cout<<"TENDRAS SOLAMENTE 5 INTENTOS PARA ADIVINARLO\n";
    cout<<"Tu puedes, digita el numero: >>"; cin>>numero;
    if(encontrar==numero){
        cout<<"Felicidades, encontraste el numero, el numero escondido es: "<<encontrar;
    }

    return 0;
}