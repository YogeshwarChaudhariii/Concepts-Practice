// Write a program which accept string from user and toggle the case.

/*
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os
*/

#include<iostream>
#include<string>
using namespace std;

int strtogglex(char *str)
{
    char iConvert = '\0';

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str += 32;   
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr, 20);

    strtogglex(Arr);

    cout<<Arr<<endl;

    return 0;
}