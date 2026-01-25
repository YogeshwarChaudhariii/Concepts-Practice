// Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not.  

#include<iostream>
using namespace std;

void Display()
{
    char ch = '\0';

    cout<<"Enter a character: "<<endl;
    cin>>ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch =='O' || ch == 'U')
    {
        cout<<"vowel"<<endl;
    }
    else
    {
        cout<<"not a vowel"<<endl;
    }
}

int main()
{
    Display();

    return 0;
}