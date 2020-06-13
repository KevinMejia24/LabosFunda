//calculo de salarios

#include <iostream>

using namespace std;
//Se declaran las funciones
double salariotota(int x,int y);
double salarioreal(int x,int y);
void calculoempleados();
//Funcion principal
int main(){
  //se declaran las variables
  int opc,normal,extra,empleados;
  double fun,fun1;
  //Se utiliza un menu, en el cual el usuario decide si quiere ingresar empleados o si desea salir
  while (opc != 2)
  {
    cout<<"\n1-Ingresar empleados ";
    cout<<"\n2-Salir\n";
    cout<<"\n>>";
    cin>>opc;
      switch (opc)
      {
        case 1: 
        //se efectua una de las funciones que es la que mostrara los empleados con su salario total y real
        calculoempleados();
          break;
        default:
          break;
      }
  }
  
  return 0;
}
//Esta funcion es la que se encarca de encontrar el salario total de cada empleado
double salariotota(int x,int y){
  double normal,hora,extra,hora1,total;
  normal = x;
  extra = y;
 //Se declara cual sera el precio por hora, si es normal o si es extra
  hora = normal*1.75;
 
  hora1 = extra * 2.50;
  
  total=hora+hora1;
  /*La funcion regresara la variable total, que es donde se encuentran
   las ganancias por las horas normales y horas extras
  */
 return total;
}
//funcion salario total, es la que encuentra el salario real
double salarioreal(int x,int y)
{
  int salariototal,normal,extra,suma,ss,afp,isr,total;
      
      normal=x;
      extra=y;
//Se utiliza la funcion para el salario total y se guarda en una variable
      salariototal= salariotota(normal,extra);
      if(salariototal>500){
        //Si el salario es mayor a $500 se le cobrara el impuesto sobre la renta
        ss=salariototal*0.04;
        afp=salariototal*0.0625;
        isr=salariototal*0.1;
        suma=ss+afp+isr;
        total=salariototal-suma;
      }
      //si el salario no es mayor a $500 no se le cobrara el impuesto sobre la renta
      else
      {
        ss=salariototal*0.04;
        afp=salariototal*0.0625;
        suma=ss+afp;
        total=salariototal-suma;
      }
  //la funcion retornara el salario total menos los impuestos, que sera el salario real
  return total;
}
//Se utiliza la funcion calculoempleados para saber cuantos empleados seran los ingresados,
//y saber el salario total y el salrio real de N empleados
void calculoempleados(){
  int empleado,normal,extra,nombre;
  double fun,fun1;
  cout<<"cantidad de empleados: "<<">>";cin>>empleado;
  //Se piden N veces las cantidades, segun N empleado
  for(int i=1;i<=empleado;i++){
    cout<<"Empleado "<<i<<" cuantas horas de trabajo normales son: ";cin>>normal;
    cout<<"Empleado "<<i<<" cuantas horas de trabajo extras son: ";cin>>extra;
    fun = salariotota(normal,extra);
    fun1 = salarioreal(normal,extra);
    cout<<"empleado: "<<i<<" Tu salario total es: $"<<fun<<endl;
    cout<<"y el salario real es: $"<<fun1<<endl<<endl<<endl;
  }
}