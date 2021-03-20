//programa que pide dos numeros A y B e imprime en pantalla el residuo de la division

#include <iostream>

using namespace std;

int main()
{
    int NumA;   //Numero A
    int NumB;   //Numero B

    cout<<"Digite el numero A: ";
    cin>>NumA;

    cout<<"Digite el numero B: ";
    cin>>NumB;

    int Res;
    Res=NumA%NumB;  //Residuo de la division

    cout<<"\nEl residuo de la division "<<NumA<<"/"<<NumB<<" es: "<<Res<<endl;

    return 0;
}
