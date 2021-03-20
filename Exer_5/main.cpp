/*
Programa que muestra la division entre dos numeros, redondeando el resultado.
*/

#include <iostream>

using namespace std;

int main()
{
    float NumA;
    float NumB;
    float Res;
    int ResEntera;

    cout<<"Digite el numero A: ";
    cin>>NumA;

    cout<<"Digite el numero B: ";
    cin>>NumB;

    Res=NumA/NumB;
    ResEntera=(int)Res;

    if ((Res+0.5)>=ResEntera+1)

        cout<<NumA<<"/"<<NumB<<"="<<ResEntera+1<<endl;

    else

        cout<<NumA<<"/"<<NumB<<"="<<ResEntera<<endl;

    return 0;
}

/*
Si se dividen dos int el resultado siempre va a ser un int.
*/
