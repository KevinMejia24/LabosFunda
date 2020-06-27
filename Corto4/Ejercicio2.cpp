#include <iostream>

using namespace std;
float promedio(float x);
void comparar(float x [],float y);

int main(){
    float encontrar=0,compara=0,fun1;
    float estatura[25],fun2;
    cout<<"\n\nEl siguiente programa calcula el promedio de estatura de una clase de 25 alumnos.\n";
    cout<<"Ademas muestra cuantos se encuentran arriba de la media y cuantos debajo de la media.\n";
    cout<<"\nDigite las estaturas\n\n";
    for(int i=0;i<25;i++){
        cout<<"Estatura del estudiante "<<i+1<<": ";
        cin>>estatura[i];
        compara=estatura[i];
        encontrar=encontrar+estatura[i];
    }
    fun1=promedio(encontrar);
    cout<<"\nEl promedio es:"<<fun1<<endl;
    comparar(estatura,encontrar);
    return 0;
}

float promedio(float x){
    double estatura,promedio;
    estatura=x;
    promedio=estatura/25; 
    return promedio;
}

void comparar(float arreglo[],float y){
    int ContadorArriba=0,ContadorAbajo=0;
    float encontrar,fun1;
    fun1=promedio(y);
    for(int i=0;i<25;i++){
        if(arreglo[i]<fun1){
            ContadorAbajo++;
        }else{
            ContadorArriba++;
        }      
    }
    cout<<"Son "<<ContadorAbajo<<" alumnos los que estan por debajo de la media"<<endl;
    cout<<"Son "<<ContadorArriba<<" alumnos los que estan por encima de la media"<<endl<<endl;
}