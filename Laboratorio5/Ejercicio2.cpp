#include <iostream>
#include <time.h>
#include <string>

using namespace std;
string second(int x,int y, int z);


int main(){

    int hora=0,minuto=0,segundo=0;
    string despues;

    time_t tiempoActual = time(NULL);
    struct tm horaActual = *localtime(&tiempoActual);

    hora=horaActual.tm_hour;
    minuto=horaActual.tm_min;
    segundo=horaActual.tm_sec;

    cout<<"\n\nEl siguiente programa muestra la hora actual, y luego muestra la hora despues de un segundo"<<endl<<endl;

    despues= second(hora,minuto,segundo);

    cout<<"\nLa hora actual es: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
    cout<<"la hora despues de un segundo es: "<<despues<<endl<<endl;
  
    return 0;
}

string second(int x,int y, int z){
    int hora,minuto,segundo;
    hora=x;
    minuto=y;
    segundo=z;

    
    segundo++;
    if(segundo>59){
        segundo=0;
        minuto ++;
    }if(minuto>59){
        minuto=0;
        hora ++;
    }if(hora>23){
        hora=0;
    }


    string horas= to_string(hora);
    string minutos=to_string(minuto);
    string segundos=to_string(segundo);
    string second = horas+":"+minutos+":"+segundos;
    
    return second;
}


