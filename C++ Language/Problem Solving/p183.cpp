// Input : InDiA
// Output : I$D$A

#include<iostream>
using namespace std;

void Display(char str[])
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
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