// Write a program which accept string from user and accept one character. Return frequency of that character.

/*
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0
*/

#include<iostream>
using namespace std;

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (ch == *str)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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

    iRet = CountChar(Arr, cValue);

    cout<<"Character frequency is: "<<iRet;


    return 0;
}