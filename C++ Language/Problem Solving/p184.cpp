// Input : InDiA
// Output : INDIA

#include<iostream>
using namespace std;

void Display(char str[])
{
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
    char ch[50];

    cout<<"Enter the string: "<<endl;
    cin.getline(ch, 50);

    Display(ch);

    cout<<"Converted string is: "<<ch<<endl;

    return 0;
}