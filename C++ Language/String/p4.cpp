// Find character is capital or small

#include<iostream>
using namespace std;

int main()
{
    char str = '\0';

    cout<<"Enter a character"<<endl;
    cin>>str;

    if ((str >= 'a') && (str <= 'z'))
    {
        cout<<str<<" is a small character"<<endl;
    }
    else if ((str >= 'A') && (str <= 'Z'))
    {
        cout<<str<<" is a capital character"<<endl;
    }
    else
    {
        cout<<"Enter valid character";
    }
    
    return 0;
}