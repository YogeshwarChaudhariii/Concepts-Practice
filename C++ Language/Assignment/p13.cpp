// Accept one character from user and convert case of that character. 

#include<iostream>
using namespace std;

void Display()
{
    char ch = '\0';

    cout<<"Enter a character: "<<endl;
    cin>>ch;

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        cout<<char(ch + 32)<<endl;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        cout<<char(ch - 32)<<endl;
    }
}

int main()
{
    Display();

    return 0;
}