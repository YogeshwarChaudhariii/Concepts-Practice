// Print full name and another name

#include<iostream>
using namespace std;

void Display(char Name[], char AnotherName[])   
{
    int iNo; 

    cout<<"Enter your full name "<<endl;
    cin.getline(Name, 30);

    cout<<"Your full name is: "<<endl<<Name<<endl<<endl;

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

    Display(str, str2);

    return 0;
}