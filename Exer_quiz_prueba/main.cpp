/* Programa que pide un numero entero N e imprime el
   resultado de la suma de todos sus digitos elevados
   a si mismos */

#include <iostream>

using namespace std;

int main()
{
  int Num;
  int Sum=0;
  int Conter=0;

  cout<<"Ingrese el numero a evaluar: "<<end;
  cin>>Num;

  for (int i=10;;i=i*10)    //se utiliza para saber la cantidad de digitos
  {
        if (Num/i<1){break;}
        Conter++;
  }

  return 0;
}
