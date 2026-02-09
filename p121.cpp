// Write a program which accept string from user and convert it into lower case.

/*
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/

#include<iostream>
#include<string>
using namespace std;

int strlwrx(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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

    strlwrx(Arr);

    cout<<Arr<<endl;



    return 0;
}