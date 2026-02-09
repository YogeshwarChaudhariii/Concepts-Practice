// Accept Character from user and check whether it is small case or not (a-z).

/*
Input : g
Output : TRUE
Input : D
Output : FALSE
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if (bRet == TRUE)
    {
        cout<<"It is Small case Character"<<endl;
    }
    else
    {
        cout<<"It is not a Small case Character"<<endl;
    }
    
    

    return 0;
}