#include <iostream>

using namespace std;

void repeticiondenumero();

int main(){
    cout<<"\n\nDado un arreglo y un número entero, se cuenta las veces";
    cout<<" que se repite dicho número en el arreglo ";
    repeticiondenumero();
    return 0;
}

void repeticiondenumero(){
    int contador=0,numero=2;
    int longitud=10;
    int arreglo[10]={1,2,3,2,5,6,7,8,2,10}; 
    cout<<"\n\nElementos del arreglo: ";
    cout<<"[";
    for( int i = 0 ; i<=(longitud-1); i++){
        if(i == (longitud-1)){
            cout<<arreglo[i];
        }
        else{
            cout<<arreglo[i]<<",";
        } 
          
    } 
    cout<<"]\n";  
    for( int i = 0 ; i<(longitud-1); i++){
        if(arreglo[i]==numero){
            contador++;
        }
    }
    cout<<endl;
    cout<<"El numero "<<numero<<" se encuentra "<<contador<<" veces en el arreglo\n\n";
}