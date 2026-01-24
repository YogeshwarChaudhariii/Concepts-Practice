/*
Suggests compiler to store variable in CPU register
Faster access than memory
Scope: local
Lifetime: till block execution
Default value: garbage
Cannot use address (&) of register variable
*/

#include<iostream>
using namespace std;

void Display()
{
    auto No1 = 11;
    register int No2 = 21;

    cout<<"Value of i (auto) is: "<<No1<<endl;
    cout<<"Value of j (register) is: "<<No2<<endl;
}

int main()
{
    Display();

    return 0;
}
