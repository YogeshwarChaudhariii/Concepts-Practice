// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

/*
Input : A
Output :    Decimal 65
            Octal 0101
            Hexadecimal 0X41
*/

#include<iostream>
using namespace std;

void Display(char ch)
{
    int iValue = ch;

    cout<<"Decimal\t\t"<<iValue<<endl;
    cout<<"Octal\t\t"<<oct<<iValue<<endl;
    cout<<"Hexadecimal\t"<<hex<<iValue<<endl;
    
}

int main()
{
    char cValue = '\0';

    cout<<"Enter the character: "<<endl;
    cin>>cValue;


    Display(cValue);

    return 0;
}