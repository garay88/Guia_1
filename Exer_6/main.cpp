/*
Programa que pide dos numeros A y B, se debe imprimir la potencia
A**B.
*/

#include <iostream>

using namespace std;

int main()
{
    int NumA;
    int NumB;
    int Conta;
    int Total;
    int Sum;

    cout<<"Digite el numero A: ";
    cin>>NumA;

    cout<<"Digite el numero B: ";
    cin>>NumB;

    Conta=0;
    Sum=NumA;
    while (Conta<NumB-1)
    {
        Sum=NumA*NumA;
        Total+=Sum;
        Conta++;
    }

    cout<<Total<<endl;
}
