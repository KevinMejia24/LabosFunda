#include <iostream>
//se usa la libreria math.h para utilizar PI
#include <math.h>

using namespace std;

int main(){
    //se declaran variables
    float radio, area =0,perimetro = 0;

    //se pide que digiten el valor del radio
    cout<<"digite el radio de un circulo: ";
    cin>>radio;
   
    //se calcula el area y perimetro del circulo, a partir del radio 
    //calculando el perimetro perimetro=2pi por radio
    perimetro = ((2*(atan(1)*4))*radio);
    //calculando el area area=pi por radio al cuadrado
    area = ((atan(1)*4)*(pow(radio,2)));

    //mostrando datos
    cout<<"\nEl perimetro del circulo es: "<<perimetro;
    cout<<"\nEl area del circulo es: "<<area<<endl;
    

    return 0;
}