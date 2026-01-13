// Convert string into capital and small

#include<iostream>
using namespace std;

void DisplaySmall(char *ConvertString)
{
    while (*ConvertString != '\0')
    {
        if ((*ConvertString >= 'A') && (*ConvertString <= 'Z'))
        {
            *ConvertString += 32;
        }
        ConvertString++;
    }
}

void DisplayCapital(char *ConvertString)
{
    while (*ConvertString != '\0')
    {
        if ((*ConvertString >= 'a') && (*ConvertString <= 'z'))
        {
            *ConvertString -= 32;
        }
        ConvertString++;
    }
}

int main()
{
    char str[30] = {'\0'};
    int iNo;

    cout<<"Enter your string: "<<endl;
    cin.getline(str, 30);

    cout<<"Convert String into capital letters...? Press 1"<<endl
        <<"Cnovertstring into small letters...? Press 2"<<endl
        <<"Exit...? Press 0"<<endl;
    cin>>iNo;

    if (iNo == 0)
    {
        exit(EXIT_SUCCESS);
    }
    else if (iNo == 1)
    {
        DisplayCapital(str);
        cout<<"Your converted string is: "<<str<< endl;
    }
    else if (iNo == 2)
    {
        DisplaySmall(str);
        cout<<"Your converted string is: "<<str<< endl;
    }
    else
    {
        cout<<"Invalid option..!"<<endl;
    }
    
    
    
    return 0;
}