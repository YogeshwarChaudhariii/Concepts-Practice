//Check whether character is capital or not
//(In character)

#include<iostream>
using namespace std;

void Display(char cValue)
{
    if (cValue >= 'A' && (cValue <= 'Z'))
    {
        cout<<"Character is capital";
    }
    else
    {
        cout<<"character is small";
    }
}

int main()
{
    char ch = '\0';

    cout<<"Enter a character: "<<endl;
    cin>>ch;

    Display(ch);


    return 0;
}