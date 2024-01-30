/* realice un programa que lea de de la entrada estandar los sigt. datos de una persaona:

Edad: dato tipo entero
Sexo: dato tipo caracter
Altura en metros dato tipo real

Tras leer los datos, el programa debe mostrarlo en la salida estadar
  */


#include <iostream>

using namespace std;

int main()
{
  int edad;
  char sexo [10];
  float altura;

  cout<<"digite su edad: "<<endl; cin>>edad;
      cout<<"digite su sexo: "<<endl; cin>>sexo;
      cout<<"digite su altura en metros: "<<endl; cin>>altura;

       cout<<"\n edad: "<<edad<<endl;
       cout<<"\n sexo: "<<sexo<<endl;
       cout<<"\n altura en metros:"<<altura<<endl;

    return 0;
}
