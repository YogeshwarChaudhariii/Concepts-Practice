// Print full name

#include<iostream>
using namespace std;

void Display(char name[])   //change []
{
    cout<<"Enter your full name "<<endl;

    while (name != '\0')
    {
        cin.getline(name, 30);
        name++;        
    }
    
    cout<<"Your full name is: "<<endl<<name;
}

int main()
{
    char str[30];

    Display(str);

    return 0;
}