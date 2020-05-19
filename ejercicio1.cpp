#include <iostream>

using namespace std;

int main(){
    int numero1, numero2, residuo =0, division =0;
    cout<<"\nEl siguiente programa verifica si un numero es divisible entre otro";
    cout<<endl<<endl;
    cout<<"Digite un numero: "; cin>>numero1;
    cout<<"Digite otro numero: "; cin>>numero2;cout<<endl;
    cout<<endl;
    residuo = numero1%numero2;
    division = numero1/numero2;

    if(residuo==0){
        cout<<"es divisible, la division es: "<<division<<endl<<endl;
    }else{
        cout<<"no es divisible"<<endl<<endl;
    }
    

 
    return 0;
}