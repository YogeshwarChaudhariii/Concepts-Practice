// Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

/*
Input : E Output : TRUE
Input : d Output : FALSE
*/

#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Display(char cValue)
{
    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
        cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
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
    char ch = '\0';
    bool bRet = FALSE;

    cout<<"Enter character: "<<endl;
    cin>>ch;

    bRet = Display(ch);

    if (bRet == TRUE)
    {
        cout<<"It is Vowel";
    }
    else
    {
        cout<<"It is not Vowel";
    }
    
    


    return 0;
}