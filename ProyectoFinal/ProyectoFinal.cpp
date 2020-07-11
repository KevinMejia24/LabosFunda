#include <iostream>
#include <string>
#include <string.h>

//Se declara una constante
const int longCad = 20;

using namespace std;
//Se declara una estructura, para poder utilizar las variables que contiene
struct costoPorArticulo{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};
//Se declaran las funciones que se utilizaran
void LecturaDeDatos (costoPorArticulo arreglo[],int Cantidad);
void CalculoPorArticulo (costoPorArticulo arreglo[],int Cantidad);
void MostrarDatosDelArreglo (costoPorArticulo arreglo[],int Cantidad);
float Total(costoPorArticulo arreglo[],int Cantidad);
//Funcion principal
int main(){
    //Se declara la variable que guardara el dato de la cantidad de articulos
    int CantidadArt;
    cout<<endl<<endl;
    cout<<"**********PROYECTO FINAL**********\n\n";
    cout<<"El siguiente programa procesa información sobre productos comprados por un\n";
    cout<<"cliente en una tienda, a modo de procesamiento de una factura de compra.\n\n";
    cout<<"Ingrese la cantidad de articulos \nseguido ingrese: ";
    cout<<"nombre del artículo,precio unitario y la cantidad de unidades compradas, \n\n";
    cout<<"El programa le regresara su lista, con el costo total por articulo, y el total de la compra.\n \n";
    cout<<"\n\nDigite la cantidad de articulos: ";
    //Se le pide al usuario que digite la cantidad de articulos
    cin>>CantidadArt;
    cin.ignore(100,'\n');
    //Se declara un arreglo de la estructura, el cual ira guardando toda la informacion 
    costoPorArticulo arreglo[CantidadArt];
    //En las funciones hay dos parametros, el arreglo y la cantidad de articulos, esto
    //para ir guardando la informacion, y posteriormente utilizar la informacion guardada
    //en otras funciones
    //Llamamos a esta funcion para guardar los datos
    LecturaDeDatos(arreglo,CantidadArt);
    //Llamamos a esta funcion para que realice el calculo por articulo
    CalculoPorArticulo(arreglo,CantidadArt);
    cout<<"\n\n\n********* Compra Realizada *********\n";
    //Llamamos a esta funcion que sera la encargada de mostrarnos los datos guardados
    //agregando un dato, que es el calculo por articulo
    MostrarDatosDelArreglo(arreglo,CantidadArt);
    cout<<endl<<endl;
    //Llamamos a la funcion total, para que nos muestre el total de nuestra compra
    cout<<"*********************  total: $"<<(Total(arreglo,CantidadArt));
    cout<<endl<<"\nGracias por su compra, lo esperamos\n\n"<<endl;
    return 0;
}
//Esta funcion se encarga de guardar los datos, en el arreglo
void LecturaDeDatos (costoPorArticulo arreglo[],int Cantidad){
    for(int i = 0; i < Cantidad; i++){
        cout<<endl;
        cout<<"Articulo "<<i+1<<": "; 
        //Se utiliza, la variabre de tipo char, que esta en la estructura
        //para guardar el nombre del articulo
        cin.getline(arreglo[i].nombreArticulo,21,'\n');
        cout<<"Precio c/u: $"; 
        //Se utiliza la variable precio que esta en la estructura
        //para guardar el precio del articulo
        cin>>arreglo[i].precio;
        cout<<"Cantidad de Unidades: ";
        //Se utiliza la variable cantidad que esta en la estructura
        //para guardar el cantidad de articulos comprados 
        cin>>arreglo[i].cantidad;
        cin.ignore(100,'\n');
    }
}
//Esta funcion se encarga de hacer el calculo por articulo, la cual recibe los valores
//ya guardados en el arreglo
void CalculoPorArticulo (costoPorArticulo arreglo[],int Cantidad){
    for(int i=0;i<Cantidad;i++){
        //con los valores ya guardados en el arreglo, utilizamos
        //la variable cantidad y precio, para obtener el costo por articulo 
        arreglo[i].costoPorArticulo = arreglo[i].cantidad*arreglo[i].precio;
    }
}
//Funcion encargada de mostrar lso datos ya guardado, ademas, aniade el corto por articulo
void MostrarDatosDelArreglo (costoPorArticulo arreglo[],int Cantidad){
    for(int i = 0; i < Cantidad; i++){
        cout<<endl;
        cout<<"Nombre del articulo "<<i+1<<":*****  "<<arreglo[i].nombreArticulo<<endl; 
        cout<<"Precio c/u: ***************  $"<<arreglo[i].precio<<endl;
        cout<<"Cantidad de Unidades: *****  "<<"  "<<arreglo[i].cantidad<<endl;
        cout<<"Costo por articulo: *******  $"<<arreglo[i].costoPorArticulo<<endl;
    }
        
}
//Esta funcion se encarga de hacer el total de la compra, ira sumando los costos por articulos
float Total(costoPorArticulo arreglo[],int Cantidad){
    float total;
    //Se utiliza un if, ya que si solo es un articulo, el total sera el costo por aticulo
    if(Cantidad == 1){
        for(int i=0;i<Cantidad;i++){
        total=arreglo[i].costoPorArticulo;
        }
    }
    //pero si es mas de un articulo, entonces ira sumando los costos de cada articulo
    else{
        for(int i=0;i<Cantidad;i++){
            total=arreglo[i].costoPorArticulo+total;
        }    
    }
    //Al ser una funcion de tipo float, regresara el el total 
    return total;
}