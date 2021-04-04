/* Programa que pide un numero N e imprime en pantalla la
suma de todos los numeros entre 0 y N */

#include <iostream>
using namespace std;

int main()
{
    int Num;
    int i;
    int sum=0;

    cout<<"Ingrese el numero: ";
    cin>>Num;

    for(i=1;i<=Num;i=i+1)
    {
        sum+=i;
    }

    cout<<"La suma desde 0 hasta "<<Num<<" es: "<<sum<<endl;

    return 0;
}
