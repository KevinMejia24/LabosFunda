//codificacion
#include <iostream>
#include <string>

using namespace std;
//Se declara la funcion encargada de codificar el mensaje
char codificar (char x );
//Funcion principal
int main(){
    //Se declaran las variables
    string palabra="";
    int longitud;
    cout<<"El siguiente programa codifica el contenido utilizando la clave del murcielago.\n\n";
    //Nos muestra cual es la clave del murcielago
    cout<<"clave del murcielago:\n";
    cout<<"m = 0 ; u = 1 ; r = 2 ; c = 3\n";
    cout<<"i = 4 ; e = 5 ; l = 6 ; a = 7\n";
    cout<<"g = 8 ; o = 9\n\n";
    cout<<"Escriba una palabra u oracion: "; 
    //Se utiliza la funcion getline que es la que nos ayudara a que los espacios que introduscamos se guarden
    getline(cin,palabra);
    //Se encuentra la longitud de la oracion o palabra
    longitud=palabra.length();

    cout<<"usted digito: "<<palabra<<endl<<endl;
    cout<<"palabra codificada: ";
    //El ciclo for, recorrera letra por letra, buscando las condiciones que estan en la funcion codificar
    //Y si encuentra una condicion, hara el respectivo cambio
    for(int i = 0;i<longitud;i++){
        cout<<codificar(palabra[i]);

    }
    cout<<endl<<endl;
    
    return 0;
}
//Funcion que nos ayuda a cambiar las letras que estan previamente en la una condicion
char codificar (char x){
    switch(x){
         case 'm': x = '0'; break;
         case 'u': x = '1'; break;
         case 'r': x = '2'; break;
         case 'c': x = '3'; break;
         case 'i': x = '4'; break;
         case 'e': x = '5'; break;
         case 'l': x = '6'; break;
         case 'a': x = '7'; break;
         case 'g': x = '8'; break;
         case 'o': x = '9'; break;
    }
    return x;
}
