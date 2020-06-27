//Notas
#include <iostream>
using namespace std;
//Se declara la funcion para guardar los elementos de la matris
void matriz(float x[][5],int cantidad);
//Se declara la funcion que mostara las notas y se encarga de ver si aprobo o reprobo
void MostrarNota(float x[][5],int cantidad);
//Funcion principal
int main(){
    //variable que guardara la cantidad de estudiantes
    int estudiantes;
    cout<<"\n\nEl siguiente programa lee las 5 notas de n estudiantes, con ponderacion de 20porciento";
    cout<<" luego indicara si aprobo o reprobo\n\n";
    cout<<"cantida de estudiantes \n";
    cout<<"                         >>";
    //Se pide digite la cantidad de estudiantes
    cin>>estudiantes;
    //se declara la matris
    float matrizestudiantes[estudiantes][5];
    //Se usa la funcion que guardara los elementos en la matriz, y recibe dos parametros
    matriz (matrizestudiantes,estudiantes);
    //Se usa la funcion que mostrara las notas y dira si aprobo o reprobo
    MostrarNota(matrizestudiantes,estudiantes);
  return 0;
}
//Funcion encargada de llenar matris
void matriz(float x[][5],int cantidad){
  for(int i = 0 ; i < cantidad ; i++){
      cout<<"\nEstudiante: "<<i+1<<endl;
      for(int j = 0 ; j < 5 ; j++){
          cout<<"Nota "<<j+1<<" del estudiante "<<i+1<<" : "; 
          cin>>x[i][j];
        }
    }cout<<endl;
}
//funcion encargada de mostrar las notas y encargada de ver quien aproba y quien no
void MostrarNota(float x[][5],int cantidad){
    float notafinal,suma;
    for(int i = 0 ; i < cantidad ; i++){
        suma=0;
        cout<<"Alumno "<<i+1<<endl;
        for(int j = 0 ; j < 5 ; j++){
            suma += ((x[i][j])*(0.20));
           
        }
        if(suma<6){
            cout<<"Has reprobrado con una nota de "<<suma<<endl<<endl;
        }
        else{
            cout<<"Has aprobado con una nota de "<<suma<<endl<<endl;
        }
    }
}