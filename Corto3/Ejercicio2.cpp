#include <iostream>

using namespace std;
//Se declaran las funciones
void intentos();
//Funcion principal
int main(){
    //se declaran las variables
    int condicion;
    cout<<"\nDigite un numero de los que se encuentra en el menu.\n";
    //Se crea un menu
    while(condicion!=2){
        cout<<"\n1-Jugar\n";
        cout<<"2-Salir\n";
        cout<<">>"; cin>>condicion;
        cout<<endl;
        switch (condicion)
        {
        //en caso de elegir la opcion 1 del menu, el usuario tendra que digitar lo que se le pide
        case 1:
        cout<<"Encuentra el numero escondido\n";
        cout<<"\nDigita un numero entre 1-100\n";
        cout<<"TENDRAS SOLAMENTE 5 INTENTOS PARA ADIVINARLO\n\n";
        //Se utiliza la funcion intentos, que es la que se encarga de que si el usuario adivina 
        //el numero, ya no seguira con los intentos, y en caso de llegar a 5 intentos, el juego terminara
        intentos();
            break;
        //en caso de que se digite un numero diferente a 2, mostrara un mensaje donde 
        //no se esta ingresando un valor correcto, y se le pedira que digite una opcion valida 
        default:
        if(condicion!=2){
            cout<<"Digite una opcion valida\n";
        }
            break;
        }
    }

    return 0;
}
//Funcion intentos
void intentos(){
    int encontrar = 47,numero,contador=0;
    bool condicion;
    //Se utiliza un menu con un contador, que este contador sera el encargado de
    //las 5 oportunidades para adivinar el numero
    while (condicion){
        contador++;
        cout<<"intento: "<<contador<<endl;
        cout<<"Tu puedes, digita el numero: >>"; cin>>numero;
        cout<<endl;
        //en caso de encontrar el numero, dejara de seguir preguntando
        //y mostrara un mensaje
        if(encontrar==numero)
        {
            condicion=false;
            cout<<"Ha ganado, el numero escondido era: "<<encontrar;
            cout<<endl<<endl;
        }else{
            //si el contador llega a 5, mostrara un mensaje donde se habran terminado los intentos
            if(contador>=5){
                condicion=false;
                cout<<"Ohh no, se acabaron los intentos :(\n\nVuelva a intentarlo.\n";
            }else{
                //Si el numero es mayor, dara una pista
                if(encontrar<numero){
                    cout<<"El numero que usted eligio, esta por encima al numero escondido\n\n";
                    condicion=true;
                }
                //Si el numero es menor, dara una pista
                if (encontrar>numero){
                    cout<<"El numero que usted eligio, esta por debajo al numero escondido\n\n";
                    condicion=true;
                }
            }
                
        }
        
    } 
} 