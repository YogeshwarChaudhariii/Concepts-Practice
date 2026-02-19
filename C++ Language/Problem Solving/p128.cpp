// Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

/*
Input : “Marvellous Multi OS”
M
Output : 0
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4
*/

#include<iostream>
using namespace std;

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while (str[iCount] != '\0')
    {
        if (str[iCount] == ch)
        {
            return iCount;
        }
        iCount++;
    }
    return -1;
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

    iRet = FirstChar(Arr, cValue);

    cout<<"Character location is: "<<iRet;


    return 0;
}