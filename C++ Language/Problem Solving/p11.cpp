// Write a program which accept one number from user and print that number of even numbers on screen.

/*
Input : 7
Output: 2 4 6 8 10 12 14 
*/

#include<iostream>
using namespace std;

void Display(int iNo1)
{
    if (iNo1 < 0)
    {
        return;
    }
    
    for (int i = 1; i <= iNo1 * 2; i++)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" ";
        }
        
    }
    
}

int main()
{
    int iValue1 = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue1;


    Display(iValue1);


    return 0;
}