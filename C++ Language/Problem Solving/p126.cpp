// Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

/*
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (ch == *str)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    char cValue;
    BOOL bRet = FALSE;

    cout<<"Enter String: "<<endl;
    cin.getline(Arr, 20);

    cout<<"Enter the character: "<<endl;
    cin>>cValue;

    bRet = ChkChar(Arr, cValue);

    if (bRet == TRUE)
    {
        cout<<"Character Found"<<endl;
    }
    else
    {
        cout<<"Character Not Found"<<endl;
    }
    
    


    return 0;
}