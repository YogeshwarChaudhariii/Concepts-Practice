// Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

/*
Input : %
Output : TRUE
Input : d
Output : FALSE
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        return FALSE;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        return FALSE;
    }
    else if ((ch >= '0') && (ch <= '9'))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout<<"Enter the character: "<<endl;
    cin>>cValue;

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
    
    

    return 0;
}