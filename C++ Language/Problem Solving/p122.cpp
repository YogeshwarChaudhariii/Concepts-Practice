// Write a program which accept string from user and convert it into upper case.

/*
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/

#include<iostream>
#include<string>
using namespace std;

int struprx(char *str)
{
    char iConvert = '\0';

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr, 20);

    struprx(Arr);

    cout<<Arr<<endl;

    return 0;
}