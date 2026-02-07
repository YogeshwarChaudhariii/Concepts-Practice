// Write a program which accept number from user and count frequency of 2 in it.

/*
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3
*/

#include<iostream>
using namespace std;

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
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

    iRet = CountTwo(iValue);

    cout<<"Count is: "<<iRet<<endl;


    return 0;
}