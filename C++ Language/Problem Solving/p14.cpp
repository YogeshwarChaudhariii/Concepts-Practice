// Accept one character from user and convert case of that character.

/*
Input : a Output : A
Input : D Output : d 
*/

#include<iostream>
using namespace std;

void Display(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        cValue -= 32;
        cout<<cValue<<endl;
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue += 32;
        cout<<cValue<<endl;
    }
 
}

int main()
{
    char ch = '\0';

    cout<<"Enter character: "<<endl;
    cin>>ch;


    Display(ch);


    return 0;
}