// Write a program which accept number from user and check whether it contains 0 in it or not.

/*
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/

#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    BOOL bFlag = FALSE;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            bFlag = TRUE;
        }
        iNo = iNo / 10;
    }
    
    return bFlag;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero.\n");
    }
    else
    {
        printf("It doesn't contain Zero.\n");
    }


    return 0;
}