// Write a program to find factorial of given number.

/*
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4
Output : 24 (4 * 3 * 2 * 1)
*/

#include<iostream>
using namespace std;

void Factorial(int iNo)
{
    int Multiplication = 1;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    

    for (int i = 1; i <= iNo; i++)
    {
        Multiplication *= i;
    }
    cout<<Multiplication<<endl;
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Factorial(iValue);


    return 0;
}