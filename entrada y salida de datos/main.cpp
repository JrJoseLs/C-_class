/*1 escribe un programa estadar que lea la entrada y muestre en la salida estandar su
suma, resta, multiplicacion y divicion.*/

#include<iostream>
using namespace std;

int main(){


int n1,n2,suma = 0, resta = 0, multiplicacion = 0, divicion = 0;

cout <<"Digite un numero"<<endl;
cin>>n1;
cout <<"digite otro numero"<<endl;
cin>>n2;


suma = n1 + n2;
resta = n1 - n2;
multiplicacion = n1 * n2;
divicion = n1/n2;

cout<<"\n la suma es: "<<suma<<endl;
cout<<"\n la resta es: "<<resta<<endl;
cout<<"\n la multipicacion es: "<<multiplicacion<<endl;
cout<<"\n la divicion es: "<<divicion<<endl;

return 0;

}
