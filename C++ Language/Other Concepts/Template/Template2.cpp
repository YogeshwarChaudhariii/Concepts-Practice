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
    cout<<Addition(11, 21)<<endl;
    cout<<Addition(15.63f, 69.36f)<<endl;
    cout<<Addition(11.25, 30.57)<<endl;


    return 0;
}
