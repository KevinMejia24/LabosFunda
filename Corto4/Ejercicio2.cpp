//promedio de alturas
#include <iostream>

using namespace std;
//Se declara la funcion que promediara las estaturas
float promedio(float x);
//Se declara la funcion encargada para comprobar quienes estar arriba de la estatura media y quienes no 
void comparar(float x [],float y);
//Funcion principal
int main(){
    //Se declaran las variables
    float encontrar=0,compara=0,fun1;
    float estatura[25],fun2;
    cout<<"\n\nEl siguiente programa calcula el promedio de estatura de una clase de 25 alumnos.\n";
    cout<<"Ademas muestra cuantos se encuentran arriba de la media y cuantos debajo de la media.\n";
    cout<<"\nDigite las estaturas\n\n";
    //Se usa el ciclo for para guardar los datos de los 25 estudiantes
    for(int i=0;i<25;i++){
        cout<<"Estatura del estudiante "<<i+1<<": ";
        cin>>estatura[i];
        compara=estatura[i];
        encontrar=encontrar+estatura[i];
    }
    //se guarda en una variable la funcion que que se encarga de sacar el promedio
    fun1=promedio(encontrar);
    cout<<"\nEl promedio es:"<<fun1<<endl;
    //Se llama a la funcion encargada de verificar quienes estar por arriba de la estatura media y quienes no
    comparar(estatura,encontrar);
    return 0;
}
//Funcion que saca el promedio de las 25 estaturas
float promedio(float x){
    double estatura,promedio;
    estatura=x;
    promedio=estatura/25; 
    return promedio;
}
//Funcion que compara los estudiantes que estan por encima de la estatura media y los que estan por debajo 
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