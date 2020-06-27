#include <iostream>
#include <string>

using namespace std;
char codificar (char x );

int main(){
    string palabra="";
    int longitud;

    cout<<"El siguiente programa codifica el contenido utilizando la clave del murcielago.\n\n";
    cout<<"clave del murcielago:\n";
    cout<<"m = 0 ; u = 1 ; r = 2 ; c = 3\n";
    cout<<"i = 4 ; e = 5 ; l = 6 ; a = 7\n";
    cout<<"g = 8 ; o = 9\n\n";
    cout<<"Escriba una palabra u oracion: "; getline(cin,palabra);
    longitud=palabra.length();

    cout<<"usted digito: "<<palabra<<endl<<endl;
    cout<<"palabra codificada: ";
    for(int i = 0;i<longitud;i++){
        cout<<codificar(palabra[i]);

    }
    cout<<endl<<endl;
    
    return 0;
}

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
