/* Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)    */

#include<iostream>
using namespace std;


int main(){
float a,b,c,d, resultado = 0;

cout<<"digite el valor a"<<endl; cin>>a;
cout<<"digite el valor b"<<endl; cin>>b;
cout<<"digite el valor c"<<endl; cin>>c;
cout<<"digite el valor d"<<endl; cin>>d;

resultado = (a+b) / (c+d);

cout<<"\nEl resultado es: "<<resultado<<endl;

return 0;


}
