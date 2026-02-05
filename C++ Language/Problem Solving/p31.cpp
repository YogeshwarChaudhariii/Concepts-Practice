// Write a program which accept number from user and display below pattern.

/*
Input : 5
Output : * * * * * # # # # #
Input : 6
Output : * * * * * * # # # # # # #
Input : -5
Output : * * * * * # # # # #
Input : 2
Output : * * # #
*/

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (int i = 0; i < iNo; i++)
    {
        cout<<"* ";
        
    }
    
    for (int i = 0; i < iNo; i++)
    {
        
        cout<<"# ";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Display(iValue);


    return 0;
}