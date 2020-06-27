#include <iostream>
using namespace std;

void matriz(float x[][5],int cantidad);
void MostrarNota(float x[][5],int cantidad);

int main(){
    int opc,estudiantes;
    cout<<"\n\nEl siguiente programa lee las 5 notas de n estudiantes, con ponderacion de 20porciento";
    cout<<" luego indicara si aprobo o reprobo\n\n";
    cout<<"cantida de estudiantes \n";
    cout<<"                         >>";
    cin>>estudiantes;
    float matrizestudiantes[estudiantes][5];
    matriz (matrizestudiantes,estudiantes);
    MostrarNota(matrizestudiantes,estudiantes);

  return 0;
}
void matriz(float x[][5],int cantidad){
  for(int i = 0 ; i < cantidad ; i++){
      cout<<"\nEstudiante: "<<i+1<<endl;
      for(int j = 0 ; j < 5 ; j++){
          cout<<"Nota "<<j+1<<" del estudiante "<<i+1<<" : "; 
          cin>>x[i][j];
        }
    }cout<<endl;
}

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