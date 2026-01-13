// Print full name

#include<iostream>
using namespace std;

void Display(char *name)
{
    cout<<"Enter your full name "<<endl;
    cin.getline(name, 30);

    cout<<"Your full name is: "<<endl<<name;
}

int main()
{
    char str[30];

    Display(str);

    return 0;
}