// Write a program which accept string from user and count number of capital characters.

/*
Input : “Marvellous Multi OS”
Output : 4
*/

#include<iostream>
#include<string>
using namespace std;

int CountCaptial(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
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