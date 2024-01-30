//encotrar el mayor de 2 numeros

#include <iostream>
#include <conio.h>
using namespace std;

//prototipo de funion
int encontrarMax(int x, int y);
int main(){
   int n1,n2;
   int mayor;

   cout<<"digite 2 numeros: "<<endl; cin>>n1>>n2;
   mayor = encontrarMax(n1,n2);

   cout<<"El mayor de los 2 numeros es; "<<mayor<<endl;

    getch();
    return 0;

}

//definicion de funcion
int encontrarMax(int x, int y){
    int numMax
if(x>y){
    numMax = x;
}
else{
 numMax = y;
}

}
