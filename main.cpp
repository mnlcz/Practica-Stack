#include <iostream>
#include "Stack.h"

void Pruebas1();
void Pruebas2();

using std::cout, std::endl;

int main()
{
//    Pruebas1();
    Pruebas2();
    return 0;
}

void Pruebas1()
{
    Stack_List pila(1);
    pila.MostrarCima();
    cout << "APILANDO" << endl;
    pila.Apilar(2);
    pila.MostrarCima();
    cout << "DESAPILANDO" << endl;
    pila.Desapilar();
    pila.MostrarCima();

}
void Pruebas2()
{
    Stack_List pila;
    pila.MostrarCima();
    cout << "APILANDO x10" << endl;
    for (int i = 0; i < 10; i++)
        pila.Apilar(i + 1);
    pila.MostrarCima();
    cout << "DESAPILANDO x5" << endl;
    for(int i = 0; i < 5; i++)
        pila.Desapilar();
    pila.MostrarCima();
}