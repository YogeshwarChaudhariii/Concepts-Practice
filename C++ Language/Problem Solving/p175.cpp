#include<iostream>
using namespace std;

void Display(char *Name)
{
    while (*Name != '\0')
    {
        cout<<*Name;
        Name++;
    }
    
}

int main()
{
    char ch[50];

    cout<<"Enter your name: "<<endl;
    cin.getline(ch, 50);

    Display(ch);

    return 0;
}