/*
Ejercicio 7: La calificaci�n final de un estudiante es la media ponderada de tres notas: la nota de
pr�cticas que cuenta un 30% del total, la nota te�rica que cuenta un 60% y la nota de participaci�n que cuenta
el 10% restante. Escriba un programa que lea de la entrada est�ndar las tres notas de un alumno y escriba en la
salida est�ndar su nota final.
*/

#include <iostream>

using namespace std;

int main(){
  float practica, teoria, participacion, nota_final = 0;
  cout<<"Dijite nota de practica: "<<endl; cin>>practica;
    cout<<"Dijite nota de teroria: "<<endl; cin>>teoria;
     cout<<"Dijite nota de participacion: "<<endl; cin>>participacion;


     practica = practica * 0.30; //practica *= 0.30
     teoria *= 0.60;
     participacion *= 0.10;

     nota_final = practica + teoria + participacion;

     cout<<"\nnota_final es: "<<nota_final;

    return 0;
}
