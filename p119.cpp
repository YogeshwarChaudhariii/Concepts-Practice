/* Write a program which accept string from user and check whether
it contains vowels in it or not. */

/*
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/

#include<iostream>
#include<string>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if ((*str == 'A') || (*str == 'a') || 
            (*str == 'E') || (*str == 'e') || 
            (*str == 'I') || (*str == 'i') || 
            (*str == 'O') || (*str == 'o') || 
            (*str == 'U') || (*str == 'u'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        
        
    }
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    cout<<"Enter String"<<endl;
    cin.getline(Arr, 20);

    bRet = ChkVowel(Arr);

    if (bRet == TRUE)
    {
        
        cout<<"Contains vowels"<<endl;
    }
    else
    {
        cout<<"There is no vowels"<<endl;
    }

    return 0;
}