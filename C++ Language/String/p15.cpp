// Print character one by one

#include<iostream>
using namespace std;

void Display(char *GetString)
{
    cout<<"First character is: "<<*GetString<<endl;
    GetString++;

    cout<<"Second character is: "<<*GetString<<endl;
    GetString++;

    cout<<"Third character is: "<<*GetString<<endl;
    GetString++;
}

int main()
{
    char str[30] = {'\0'};

    cout<<"Enter your string: "<<endl;
    cin.getline(str, 30);

    Display(str);


    return 0;
}