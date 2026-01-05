//Largest Number
//Generic Programming

#include<iostream>
using namespace std;

template <class T>
T Display(T No1, T No2, T No3)
{
    if ((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if ((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    // int iRet, Value1, Value2, Value3;

    // iRet = largestNo(Value1, Value2,Value3);

    cout<<Display(12, 22, 56)<<endl;
}
