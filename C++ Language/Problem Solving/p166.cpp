// Check Capital

#include<iostream>
using namespace std;

void Display(char ChkCap)
{
    if ((ChkCap >= 'A') && (ChkCap <= 'Z'))
    {
        cout<<ChkCap<<" is a capital character"<<endl;
    }
    else
    {
        cout<<"It is not capital character"<<endl;
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