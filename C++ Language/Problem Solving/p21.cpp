// Write a program which accept number from user and print that number of $ & * on screen.

/*
Input : 5
Output : $ * $ * $ * $ * $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ * $ * $ *
*/

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for (int i = 0; i < iNo; i++)
    {
        cout<<"$\t*\t";
    }
    
}

int main()
{
    int iValue;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Pattern(iValue);

    return 0;
}