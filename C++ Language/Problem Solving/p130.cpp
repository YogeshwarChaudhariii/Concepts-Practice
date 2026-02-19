// Write a program which accept string from user reverse that string in place

/*
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/

#include<iostream>
#include<cstring>
using namespace std;

void StrRevX(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    
}

int main()
{
    char Arr[20] = {'\0'};

    cout<<"Enter string: "<<endl;
    cin.getline(Arr, 20);

    StrRevX(Arr);

    cout<<Arr;


    return 0;
}