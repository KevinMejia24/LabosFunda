#include  <iostream>

using namespace std;
//Se declaran las funciones
void  guardarArreglo ( int arreglo [], int longitud);
void  sumaArreglos( int arregloN1 [], int arregloN2 [], int arregloN3 [], int longitud);
void  desplegarResultado ( int sumaArreglos [], int longitud);

int  main () {
    //Se declara la variable en la que se guardara el dato de la longitud del arreglo
    int longitud;
    //Se declaran las variables donde se guardaran los arreglos
    int arreglo1 [longitud];
    int arreglo2 [longitud];
    int arreglo3 [longitud];
    cout<<"\n\nEn el siguiente programa, ingrese la longitud para el arreglo ";
    cout<<"luego ingrese los valores para cada arreglo y finalmente se \n";
    cout<<"generara un tercer arreglo cuyos valores corresponden a la suma de los elementos";
    cout<<"de las mismas posiciones de los dos \narreglos anteriores. ";
    cout << "\n\n Digite la longitud de los arreglos: " ;
    cin >> longitud;
    cout<<"\nPrimer arreglo.";
    cout << " \n Digite los elementos del arreglo " << endl;
    //Se utiza la funcion guardarArreglo, para guardar los datos del arreglo 1
    guardarArreglo (arreglo1, longitud);
    cout<<"\nSegundo arreglo.";
    cout << " \n Digite los elementos del arreglo " << endl;
    //Se utiliza la funcion guardarArreglo, para guardar los datos del arreglo 2
    guardarArreglo (arreglo2, longitud);
    //Se utiliza la funcion sumaArreglos para obtener la suma de los elementos de cada posision
    //en arreglo 1 y arreglo por, para luego guardarlos en un numeor arreglo, arreglo 3
    sumaArreglos (arreglo1, arreglo2, arreglo3, longitud);
    //Se utiliza la funcion desplegarResultados, que nos mostrara los datos que se guardaron en arreglo 3
    desplegarResultado (arreglo3, longitud);
    cout<<endl<<endl;
    return 0;
}
//Funcion guardarArreglo, nos servira para ingresar los datos y guardarlos en arreglo 1 y luego en arreglo 2
void  guardarArreglo ( int arreglo[ ], int longitud) {
    int valor;
    for (int i = 0; i <= (longitud-1); i++){
        cout << " Ingrese el valor de la posición " << i << " : " ;
        cin >> arreglo[i];
    } 
}
//Funcion sumaArreglos, nos servira para los datos del arreglo 3, el cual sera el resultado de la suma 
//de cala elemento de arreglo 1 y arreglo 2
void  sumaArreglos ( int arregloN1 [], int arregloN2 [], int arregloN3 [], int longitud) {
    for ( int i = 0 ; i <= (longitud-1); i ++){
        arregloN3 [i] = (arregloN1 [i] + arregloN2 [i]);
    }
}
//funcion desplegarResultado, nos servira para mostrar los elemntos que se guarden en el arreglo 3
void  desplegarResultado ( int sumaArreglos [], int longitud) {
    cout << " \n\nEl resultado de la suma de los dos arreglos en cada elemento es: \n";
    cout<<"[";
    for ( int i = 0 ; i <= (longitud-1); i ++){

        if(i == (longitud-1)){
            cout<<sumaArreglos[i];
        }
        else{
            cout<< sumaArreglos [i]<<",";
        } 
        
    }    
    cout<<"]";
}