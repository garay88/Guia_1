/*
Programa que pide un numero N e imprime si es par o impar
*/

#include <iostream>

using namespace std;

int main()
{
    int NumN;   //Numero N

    cout<<"Digite el numero a evaluar: ";
    cin>>NumN;

    if (NumN%2==0)

        cout<<"El numero "<<NumN<<" es PAR."<<endl;


    else

        cout<<"El numero "<<NumN<<" es IMPAR."<<endl;

    return 0;

}
