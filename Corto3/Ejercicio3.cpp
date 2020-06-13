#include <iostream>

using namespace std;

bool aniobisiesto(int x);

int main(){

    int anio;
    bool biciesto;

    cout<<"\n\nEl siguiente programa verifica si un año es bisiesto o si no lo es.\n\n";
    cout<<"Digite un año: "; cin>>anio;
    biciesto = aniobisiesto(anio);
    if(biciesto==true){
        cout<<"El año "<<anio<<" es bisiesto"<<endl<<endl;
    }else{
        cout<<"El año "<<anio<<" no es bisiesto"<<endl<<endl;
    }
    

    return 0;
}

bool aniobisiesto(int x){
    int anio,prueba1,prueba2,prueba3;
    anio = x;
    prueba1 = anio % 400;
    prueba2 = anio % 4;
    prueba3 = anio%100;
    if(prueba1==0 ){
        return true;
    }if(prueba2==0 && prueba3!=0){
        return true;
    }else{
        return false;
    }
}