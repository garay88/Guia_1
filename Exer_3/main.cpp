/*
Programa que determina el numero mayor entre A y B
*/

#include <iostream>

using namespace std;

int main()
{
    int NumA;
    int NumB;

    cout<<"Digite el numero A: ";
    cin>>NumA;

    cout<<"Digite el numero B: ";
    cin>>NumB;

    if (NumA>NumB)

        cout<<"El numero mayor es: "<<NumA<<endl;

    else

        cout<<"El numero mayor es: "<<NumB<<endl;

    return 0;

}
