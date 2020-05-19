#include <iostream>
#include <string>

using namespace std;

int main(){
    string palabra ="";
    int verifica = 0;
    cout<<endl;
    cout<<"El programa verifica si la palabra ingresada es mayor a 10 caracteres o no y si la longitud es par o impar";
    cout<<endl;
    cout<<endl;
    cout<<"Digite la palabra: ";
    cin>>palabra;
    cout<<endl;
    cout<<"la longitud de la palabra es: "<<palabra.length()<<endl<<endl;

    verifica = palabra.length()%2;

    if (palabra.length()>10)
    {
        cout<<"La palabra es mayor a 10 caracteres"<<endl;
    }else
    {
        cout<<"La palabra no es mayor a 10 caracteres o es de 10 caracteres"<<endl;
    }
    if (verifica==0)
    {
        cout<<"Ademas la longitud de la palabra es par"<<endl<<endl;
    }else
    {
        cout<<"Ademas la longitud de la palabra es impar"<<endl<<endl;
    }
    
    
    
    






    return 0;
}

