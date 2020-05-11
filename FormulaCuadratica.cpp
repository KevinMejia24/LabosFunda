#include <iostream>
#include <math.h>

using namespace std;

int main(){
   
    //se declaran variables
    float a,b,c, forma1 = 0,forma2 =0;

    //preguntando valores
    cout<<"\n            La formula general (−b±(√b² − 4ac))/2a";
    cout<<"\n            Esta reflejada en la siguiente expresion: ax²+bx+c=0"<<endl;
    cout<<"\nIngrese los siguientes datos para obtener\nlos resultados de la formula cuadratica\n";
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<"C: ";
    cin>>c; 

    //formula general para ambos casos "+" y "-"
    
    //forma 1 caso "+"
    forma1 = ((b*-1)+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
    cout<<"\nPrimer numero de X: "<<forma1;
   
    //forma 2 caso "-"
    forma2 = ((b*-1)-(sqrt((pow(b,2))-(4*a*c))))/(2*a);
    cout<<"\nSegundo numero de X: "<<forma2<<endl<<endl;
   
    return 0;
}