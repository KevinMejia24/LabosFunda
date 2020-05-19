#include <iostream>
#include <string>

using namespace std;

int main(){

    string prueba = "";

    cout<<"\n\nEl siguiente programa verifica si una palabra inicia y finaliza con la misma letra\n\n";

    cout<<"ingrese una palabra: "; cin>>prueba;
    cout<<endl;

    if(prueba[0]==prueba[prueba.length()-1]){
        cout<<"son iguales\n\n""la palabra inicia con: "<<prueba[0];
        cout<<"\nY finaliza con: "<<prueba[prueba.length()-1]<<"\n\n";
    }else{
        cout<<"no son iguales\n\n""la palabra inicia con: "<<prueba[0];
        cout<<"\nY finaliza con: "<<prueba[prueba.length()-1]<<"\n\n";
    }

    return 0;
}