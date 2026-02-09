// Accept Character from user and check whether it is digit or not (0-9).

/*
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(int iNo)
{
    if ((iNo > 0) && (iNo < 9))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL iRet = FALSE;

    cout<<"Enter the number: "<<endl;
    cin>>iValue;

    iRet = ChkDigit(iValue);

    if (iRet == TRUE)
    {
        cout<<"It is Digit"<<endl;
    }
    else
    {
        cout<<"It is not Digit"<<endl;
    }
    
    

    return 0;
}