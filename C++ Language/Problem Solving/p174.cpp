#include<iostream>
#include<string>
using namespace std;

void Display(char *Name)
{
    cout<<"Your name is: "<<Name<<endl;
}

int main()
{
    char str[50];

    cout<<"Enter your name: "<<endl;
    cin.getline(str, 50);

    Display(str);

    return 0;
}