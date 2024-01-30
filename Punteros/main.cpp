//realice un programaque imprima las direcciones de memirua de yn arregle de 5 elementos usando punteros o usando el arreglo mismo//

#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

void PedirNotas();
void MostrarNotas();

int NumCalif,*Calif;

int main(){
PedirNotas();
MostrarNotas();

delete[]Calif; //libera el espacio en bytes utilizzados anteriormente


    return 0;
}
void PedirNotas(){
   cout << "digite el numero de clasificaciones: ";
   cin>>NumCalif;

   Calif = new int [NumCalif];

   for(int i=0;i<NumCalif;i++){
        count<<"ingrese una nota: ";
   cin>>Calif[i];
}
void MostrarNotas(){
    cout<<"\n\nMostrando notas del usuario: \n"
    for (int i=0;i<NumCalif;i++){
                cout<<"ingrese una nota" ;
    }
}
