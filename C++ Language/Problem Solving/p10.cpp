// Accept number from user and check whether number is even or odd

#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool EvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
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
    int bRet = FALSE;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    bRet = EvenOdd(iValue);

    if (bRet == TRUE)
    {
        cout<<iValue<<" is Even"<<endl;
    }
    else
    {
        cout<<iValue<<" is Odd"<<endl;
    }

    return 0;
}

