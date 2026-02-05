// Write a program which accept number from user and display its factors in decreasing order.

/*
Input : 12
Output : 6 4 3 2 1
Input : 13
Output : 1
Input : 10
Output : 5 2 1
*/

#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = iNo - 1; i >= 1; i--)
    {
        if (iNo % i == 0)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Factorial(iValue);


    return 0;
}