/* Programa que pide un numero entero N e imprime el
   resultado de la suma de todos sus digitos elevados
   a si mismos */

#include <iostream>

using namespace std;

int main()
{
  int Num;
  int i;
  int Sum=0;
  int Pow=0;
  int Potencia=1;
  int total;
  int Conter=1;

  cout<<"Ingrese el numero a evaluar: ";
  cin>>Num;

  for (i=10;;i=i*10)    //se utiliza para saber la cantidad de digitos
  {
        if (Num/i<1 && Num/i>-1){break;}
        Conter++;
  }

  i=i/10;

  while (i>=0)
  {
      Sum=Num/i;
      Pow=Sum;

      while (Pow > 1)
      {
          Potencia=Potencia*Sum;
          Pow--;
      }
  }
  return 0;
}
