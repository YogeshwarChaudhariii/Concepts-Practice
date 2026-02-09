// Write a program which accept string from user and count number of small characters.

/*
Input : “Marvellous”
Output : 9
*/

#include<iostream>
#include<string>
using namespace std;

int CountCaptial(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr, 20);

    iRet = CountCaptial(Arr);

    cout<<iRet<<endl;

    return 0;
}