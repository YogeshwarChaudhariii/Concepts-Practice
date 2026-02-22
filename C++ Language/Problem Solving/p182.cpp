// Input : India
// Output : IndiA

#include<iostream>
using namespace std;

void Display(char str[])
{
    char ConvertStr = '\0';

    while (*str != '\0')
    {
        if (*str == 'a')
        {
            *str = 'A';
        }
        str++;
    }
}

int main()
{
    char ch[50];

    cout<<"Enter a string: "<<endl;
    cin.getline(ch, 50);

    Display(ch);

    cout<<"Converted string is: "<<ch<<endl;

    return 0;
}