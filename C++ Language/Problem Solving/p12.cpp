// Write a program which accept number from user and print even factors of that number.

/*
Input : 24
Output: 1 2 4 6 8 12 
*/

#include<iostream>
using namespace std;

void Display(int iNo1)
{
    if (iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }
    
    for (int i = 1; i <= iNo1; ++i)
    {
        if (iNo1 % i == 0)
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