#include <iostream>

using namespace std;
//Se declaran las funciones
bool aniobisiesto(int x);
//Funcion principal
int main(){
    //Se declaran las variables
    int anio;
    bool biciesto;
    //Se muestra en pantalla
    cout<<"\n\nEl siguiente programa verifica si un año es bisiesto o si no lo es.\n\n";
    cout<<"Digite un año: "; cin>>anio;
    //Se utiliza una variable para guardar el valor de la funcion aniobisiesto
    biciesto = aniobisiesto(anio);
    //Al ser una funcion booleana, solo da dos valores, si es verdadero, el año es bisiesto
    //si es falso el año no es bisiesto
    if(biciesto==true){
        cout<<"El año "<<anio<<" es bisiesto"<<endl<<endl;
    }else{
        cout<<"El año "<<anio<<" no es bisiesto"<<endl<<endl;
    }
    

    return 0;
}
//Funcion aniobisiesto

bool aniobisiesto(int x){
    //se declaran las variables
    int anio,prueba1,prueba2,prueba3;
    //el valor de x se guarda en una variable
    anio = x;
    //Se hacen las pruebas para saber si es bisiesto
    prueba1 = anio % 400;
    prueba2 = anio % 4;
    prueba3 = anio%100;
    //Se condicionan los resultados para saber si es bisiesto, y son dos pruebas las que se tiene que hacer
    //Si el año es divisible entre 400
    if(prueba1==0 ){
        return true;
        //si no es divisible entre 400 se realiza la siguiente prueba: que el año sea
        //divisible entre 4 y no sea divisible entre 100 
    }if(prueba2==0 && prueba3!=0){
        return true;
        //si tampoco cumple esta segunda prueba, entonces no es bisiesto.
    }else{
        return false;
    }
}