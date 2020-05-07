#include <iostream> 

using namespace std;

int main(){
    
    //declarando variables
    string producto= "";
    float precio,total=0;
    int cantidad;

    //Se pide a la persona que ingrese los datos 
    cout<<"\n                      Ingrese los siguientes datos "<<endl;
    cout<<"\nProducto comprado: ";
    cin>>producto;
    cout<<"\nPrecio del producto comprado: $";
    cin>>precio;
    cout<<"\nCantidad de productos comprados: ";
    cin>>cantidad;

    total= precio * cantidad;

    cout<<"\nUsted ha comprado: "<<cantidad<<" "<<producto<<"s";
    cout<<"\n\n                                                  El total es: $"<<total<<endl;
    
    return 0;
}