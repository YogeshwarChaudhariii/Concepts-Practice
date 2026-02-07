// Write a program which accept number from user and count frequency of 4 in it.

/*
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1
*/

#include<iostream>
using namespace std;

int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = CountFour(iValue);

    cout<<"Count is: "<<iRet<<endl;


    return 0;
}