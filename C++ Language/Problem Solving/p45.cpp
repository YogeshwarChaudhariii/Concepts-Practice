// Write a program which accept number from user and count frequency of such a digits which are less than 6

/*
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1
*/

#include<iostream>
using namespace std;

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit <= 6)
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

    iRet = Count(iValue);

    cout<<"Count is: "<<iRet<<endl;


    return 0;
}