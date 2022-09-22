/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
    int n=0; 
    int rI;
    int rF; 
    int tI; 
    int tF;
    int Multi;

    //En este apartado lo que haremos primero es definir el rango inicial y final en el que se van a a multiplicar el alcance de las tablas

cout << "Version 1.0 de tablas de multiplicar y definicion de rangos de multiplicaciones"  << endl;
    cout<<"Insertar el rango en donde quieres que comience a multiplicar: ";
    cin>>rI;
    cout<<endl;
    cout<<"Insertar el rango en donde quieres que termine la multiplicacion: ";
    cin>>rF;
    cout<<endl;
    
    //Aqui solo seleccionamos desde que tabla queremos comenzar y terminar

    cout<<"Indique el inicio de la tabla: ";
    cin>>tI;
    cout<<endl;
    cout<<"Indique el final de la tabla: ";
    cin>>tF;
    cout<<endl;

// En este doble for lo que hara el codigo es mostrar las tablas de manera organizada de tal manera que se pueda visualizar las tablas multiplicadas y el rango
    cout<<"Resultado: "<<endl;
    int R[n];
    for(int x=tI; x<=tF; x++){
        for(int z=rI; z<=rF; z++){        
        R[z]={x*z};

        cout<<x<<"x"<<z<<"="<<R[z]<<endl;
        
    }

    }
  return 0;
}