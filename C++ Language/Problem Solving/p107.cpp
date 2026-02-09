// Accept Character from user and check whether it is capital or not (A-Z).

/*
Input : F
Output : TRUE
Input : d
Output : FALSE
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout<<"Enter the character: "<<endl;
    cin>>cValue;

    bRet = ChkCapital(cValue);

    if (bRet == TRUE)
    {
        cout<<"It is capital"<<endl;
    }
    else
    {
        cout<<"It is not capital"<<endl;
    }
    
    

    return 0;
}