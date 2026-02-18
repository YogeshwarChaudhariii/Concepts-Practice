#include<iostream>
using namespace std;

template <class T>
T Add(T iNo1, T iNo2)
{
    return iNo1 + iNo2;
}

int main()
{
    cout<<Add(11, 21)<<endl;
    cout<<Add(51.36, 121.58)<<endl;

    return 0;
}
