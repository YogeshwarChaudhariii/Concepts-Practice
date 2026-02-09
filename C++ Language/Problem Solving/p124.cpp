// Write a program which accept string from user and display only digits from that string.

/*
Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output :
*/

#include<iostream>
#include<string>
using namespace std;

int DisplayDigit(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            cout<<*str;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr, 20);

    DisplayDigit(Arr);


    return 0;
}