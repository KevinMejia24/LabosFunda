#include <iostream>
#include <string>

using namespace std;

//Se declaran las funciones
bool anionbisiesto(int x);
string fechasiguiente(int x,int y, int z);

//Se le pide a la persona que ingrese los datos de dia, mes y año
int main(){
    int dia=0,mes=0,anio=0;
    bool biciesto;
    string fecha;

    cout<<"\n\nEl siguiente programa aumenta en uno el dia.\n\n";
    cout<<"Digite el dia en numeros: "; cin>>dia;
    cout<<"Digite el mes en numeros: "; cin>>mes;
    cout<<"Digite el año en numeros: "; cin>>anio;
    cout<<"La fecha que digito es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;

    fecha= fechasiguiente(dia,mes,anio);

    cout<<"La fecha del siguiente dia es: "<<fecha<<endl<<endl;

    return 0;
}

//Funcion que verifica cuales son los años bisiestos

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

//Funcion para aumentar los dias 
string fechasiguiente(int x,int y, int z){
    int dia,mes,anio,bisiesto;
    dia=x;
    mes=y;
    anio=z;
    bisiesto = aniobisiesto(anio);
   
    dia++;
    //febrero
    if(mes==2){
        if(bisiesto){   
            if(dia>29){
                dia=1;
                mes++;
            }
        }else{ 
            if(dia>28){
            dia=1;
            mes++;
            }
        }
    }
    //Meses de 30 dias
    else if(mes==4 || mes==6 || mes==9 ||mes==11){
        if(dia>30){
            dia=1;
            mes ++;
        }
        if(mes>12){
            mes=1;
            anio ++;
        }

    }
    //Meses de 31 dias
    else{
        if(dia>31){
        dia=1;
        mes ++;
        }
        if(mes>12){
        mes=1;
        anio ++;
        }
    }
    
    string anios= to_string(anio);
    string mess=to_string(mes);
    string dias=to_string(dia);
    string second = dias+"/"+mess+"/"+anios;
    
    return second;
}



    
