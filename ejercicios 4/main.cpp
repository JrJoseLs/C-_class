// escribe la sigt expresion en c++ a+b/c / d+e/f

#include<iostream>
using namespace std;


int main(){
float a,b,c,d,e,f, resultado = 0;

cout<<"digite el valor a:"<<endl; cin>>a;
cout<<"digite el valor b:"<<endl; cin>>b;
cout<<"digite el valor c:"<<endl; cin>>c;
cout<<"digite el valor d:"<<endl; cin>>d;
cout<<"digite el valor e:"<<endl; cin>>e;
cout<<"digite el valor f:"<<endl; cin>>f;

resultado = (a+ (b/c)) / (e+(b/f));

cout<<"\nEl resultado es: "<<resultado<<endl;


return 0;


}
