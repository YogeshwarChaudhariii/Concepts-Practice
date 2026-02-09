/* Accept character from user. If character is small display its corresponding capital character, 
and if it small then display its corresponding capital. In other cases display as it is. */

#include<iostream>
using namespace std;

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch += 32;
        cout<<ch<<endl;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        ch -= 32;
        cout<<ch<<endl;
    }
    else
    {
        cout<<ch<<endl;
    }
    
    
}

int main()
{
    char cValue = '\0';

    cout<<"Enter the character: "<<endl;
    cin>>cValue;

    Display(cValue);


    return 0;
}