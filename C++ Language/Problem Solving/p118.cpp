/* Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters. */

/*
Input : “MarvellouS”
Output : 6 (8-2)
*/

#include<iostream>
#include<string>
using namespace std;

int Difference(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    while (*str != '\0')
    {
        if ((*str > 'A') && (*str < 'Z'))
        {
            iCnt1++;
            
        }
        str++;

        if ((*str > 'a') && (*str < 'z'))
        {
            iCnt2++;
        }
        str++;
    }
    return iCnt2 - iCnt1;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr, 20);

    iRet = Difference(Arr);

    cout<<iRet<<endl;

    return 0;
}