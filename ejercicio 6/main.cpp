//Escriba un fragmento de programa que intercambie los valores de dos variables.

#include<iostream>
using namespace std;

int main(){

int x,y,aux;

cout<<"dijite el valor x: "<<endl; cin>>x;
cout<<"dijite el valor y: "<<endl; cin>>y;


/*
supongamos que el usuario
x=10
y=5

aux=10
x=5
*/

aux = x;
x = y;
y = aux;

cout<<"\nel nuevo valor de x es: "<<x<<endl;
cout<<"\nel nuevo valor de y es: "<<y<<endl;



return 0;

}
