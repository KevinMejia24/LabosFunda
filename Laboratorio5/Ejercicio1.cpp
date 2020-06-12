#include <iostream>

using namespace std;

int encontrarmcd(int x,int y);

int main(){

    int mcd,numero1, numero2;

    cout<<"\n\nEl siguiente programa muestra el maximo comun divisor de dos numeros\n\nDigite dos numeros \n\n";
    cout<<"Digite los numeros: ";
    cin>>numero1>>numero2;
    

    mcd= encontrarmcd(numero1,numero2);

    cout<<"El maximo comun divisor es: "<<mcd<<endl;
  

    return 0;
}

int encontrarmcd(int x,int y){
   
    int mayor, menor, residuo;

    if(x>y){
        mayor = x;
        menor = y;
    }else{
        mayor = y;
        menor = x;
    }

do {
    residuo = mayor % menor;  
    if (residuo != 0){
        mayor = menor;
        menor = residuo;
    }
}while (residuo != 0);
    
return menor;

}

