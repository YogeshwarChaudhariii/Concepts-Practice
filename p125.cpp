// Write a program which accept string from user and count number of white spaces

/*
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
*/

#include<iostream>
#include<string>
using namespace std;

int CountWhite(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
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
    int iRet = 0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr, 20);

    iRet = CountWhite(Arr);

    cout<<iRet<<endl;


    return 0;
}