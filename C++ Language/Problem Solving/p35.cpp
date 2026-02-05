// Write a program which returns difference between Even factorial and odd factorial of given number

/*
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)
*/

#include<iostream>
using namespace std;

int FactorialDiff(int iNo)
{
    int Multiplication1 = 1;
    int Multiplication2 = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int i = iNo; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            Multiplication1 *= i;
        }

        if (i % 2 != 0)
        {
            Multiplication2 *= i;
        }
    }
    return Multiplication1 - Multiplication2;
    
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = FactorialDiff(iValue);

    cout<<"Factorial difference is: "<<iRet<<endl;


    return 0;
}