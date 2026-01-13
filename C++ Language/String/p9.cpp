// Print full name and another name

#include<iostream>
using namespace std;

void Display(char Name[])   //change []
{
    cout<<"Enter your full name "<<endl;
    cin.getline(Name, 30);

    cout<<"Your full name is: "<<endl<<Name<<endl;;
}

void DisplayAnotherName(char AnotherName[])
{
    int iNo;

    cout<<"Want to add another name...?"<<endl;
    cout<<"Press 1 Yes and Press 0 Exit"<<endl;
    cin>>iNo;   // Leaves a newline (\n) in buffer

    cin.ignore();

    if (iNo == 1)
    {
        cout<<"Enter your another name"<<endl;
        cin.getline(AnotherName, 30);

        cout<<"Your another name is: "<<endl<<AnotherName<<endl;
    }
    else
    {
        exit(EXIT_SUCCESS);
    }
}

int main()
{
    char str[30], str2[30];

    Display(str);
    DisplayAnotherName(str2);

    return 0;
}