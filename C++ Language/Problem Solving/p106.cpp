// Accept Character from user and check whether it is alphabet or not (A-Z a-z).

/*
Input : F
Output : TRUE
Input : &
Output : FALSE
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        cout<<"It is character"<<endl;
    }
    else
    {
        cout<<"It is not character"<<endl;
    }
    
    

    return 0;
}