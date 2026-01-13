// Print full name

#include<iostream>
using namespace std;

int main()
{
    char str[30];
    int i = 0;

    cout<<"Enter your full name: "<<endl;
    cin.getline(str, 30);

    cout<<"Your name is: "<<endl<<str;

    return 0;
}