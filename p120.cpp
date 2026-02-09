// Write a program which accept string from user and display it inn reverse order.

/*
Input : “MarvellouS”
Output : “SuollevraM”
*/

#include<iostream>
#include<string>
using namespace std;

void Reverse(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    
    for (i = i - 1; i >= 0; i--)
    {
        cout<<str[i];
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr, 20);

    Reverse(Arr);


    return 0;
}