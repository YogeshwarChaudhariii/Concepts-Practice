// Generic program

#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float fRet, fValue1, fValue2;

    cout<<"Enter first number: "<<endl;
    cin>>fValue1;

    cout<<"Enter second number: "<<endl;
    cin>>fValue2;

    fRet = Addition(fValue1, fValue2);

    cout<<"Addition is: "<<fRet<<endl;


    return 0;
}
