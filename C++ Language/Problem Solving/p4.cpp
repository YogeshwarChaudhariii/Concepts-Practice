// Accept one number and check whether is is divisible by 5 or not

#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool Divisible(int iNo)
{
    if ((iNo % 5) == 0)
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

    bRet = Divisible(iValue);

    if (bRet == TRUE)
    {
        cout<<iValue<<" is divisible by 5"<<endl;
    }
    else
    {
        cout<<iValue<<" is not divisible by 5"<<endl;
    }

    return 0;
}