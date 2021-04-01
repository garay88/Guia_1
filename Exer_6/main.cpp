/*
Programa que pide dos numeros A y B, he imprime en pantalla la potencia A^B
*/

#include <iostream>

using namespace std;

int main()
{
    int NumA;
    int NumB;

    cout<<"Ingrese el numero A: ";
    cin>>NumA;

    int Resultado = NumA;

    cout<<"Ingrese el numero B: ";
    cin>>NumB;

    int Conta=NumB;

    while (Conta > 1)
    {
        Resultado=Resultado*NumA;
        Conta--;
    }
    cout<<NumA<<"^"<<NumB<<"="<<Resultado<<endl;

    return 0;
}
