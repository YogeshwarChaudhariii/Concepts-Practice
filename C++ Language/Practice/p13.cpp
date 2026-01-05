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
    cout<< Addition(10, 11)<<endl;
    cout<< Addition(15, 21)<<endl;
    cout<< Addition(56.36, 12.1)<<endl;


    return 0;
}