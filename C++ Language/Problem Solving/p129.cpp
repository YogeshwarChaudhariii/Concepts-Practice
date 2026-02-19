// Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

/*
Input : “Marvellous Multi OS”
M
Output : 11
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4
*/

#include<iostream>
using namespace std;

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iSkip = -1;

    while (str[iCount] != '\0')
    {
        if (str[iCount] == ch)
        {
            iSkip = iCount;
        }
        iCount++;
    }
    return iSkip;
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    cout<<"Enter string: "<<endl;
    cin.getline(Arr, 20);

    cout<<"Enter the character: "<<endl;
    cin>>cValue;

    iRet = LastChar(Arr, cValue);

    cout<<"Character location is: "<<iRet;


    return 0;
}