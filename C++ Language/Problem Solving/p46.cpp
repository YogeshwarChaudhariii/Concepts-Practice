// Write a program which accept number from user and return the count of even digits

/*
Input : 2395
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
*/

#include<iostream>
using namespace std;

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
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