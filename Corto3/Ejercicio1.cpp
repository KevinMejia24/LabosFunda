//calculo de salarios

#include <iostream>

using namespace std;

double salariotota(int x,int y);
double salarioreal(int x,int y);
void calculoempleados();

int main(){
  int opc,normal,extra,empleados;
  double fun,fun1;
  while (opc != 2)
  {
    cout<<"\n1-Ingrese numero de empleados: ";
    cout<<"\n2-Salir\n";
    cout<<"\n>>";
    cin>>opc;
      switch (opc)
      {
        case 1: 
        calculoempleados();
          break;
        default:
          break;
      }
  }
  
  return 0;
}

double salariotota(int x,int y){
  double normal,hora,extra,hora1,total;
  normal = x;
  extra = y;
 
  hora = normal*1.75;
 
  hora1 = extra * 2.50;
  
  total=hora+hora1;
  return total;
}

double salarioreal(int x,int y)
{
  int salariototal,normal,extra,suma,ss,afp,isr,total;
      
      normal=x;
      extra=y;
      salariototal= salariotota(normal,extra);

      if(salariototal>500){
        ss=salariototal*0.04;
        afp=salariototal*0.0625;
        isr=salariototal*0.1;
        suma=ss+afp+isr;
        total=salariototal-suma;
      }
      else
      {
        ss=salariototal*0.04;
        afp=salariototal*0.0625;
        suma=ss+afp;
        total=salariototal-suma;
      }
  return total;
}

void calculoempleados(){
  int empleado,normal,extra,nombre;
  double fun,fun1;
  cout<<"cantidad de empleados: "<<">>";cin>>empleado;
  for(int i=1;i<=empleado;i++){
    cout<<"Empleado "<<i<<" cuantas horas de trabajo normales son: ";cin>>normal;
    cout<<"Empleado "<<i<<" cuantas horas de trabajo extras son: ";cin>>extra;
    fun = salariotota(normal,extra);
    fun1 = salarioreal(normal,extra);
    cout<<"empleado: "<<i<<" Tu salario total es: $"<<fun<<endl;
    cout<<"y el salario real es: $"<<fun1<<endl<<endl<<endl;
  }
}