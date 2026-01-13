// Convert string capital to small

#include<iostream>
using namespace std;

void Display(char *ConvertString)
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

int main()
{
    char str[30] = {'\0'};

    cout<<"Enter your string: "<<endl;
    cin.getline(str, 30);

    Display(str);

    cout<<"Your converted string is: "<<str<< endl;
    
    return 0;
}