// Write a program which accept number from user and return summation of all its non factors.

#include<iostream>
using namespace std;

void Display()
{
    int iNo = 0, SummationFact = 0, SummationNonFact = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (int i = 1; i <= iNo; i++)
    {
        if (iNo % i == 0)
        {
               SummationFact += i;
        }
        else
        {
            SummationNonFact += i;
        }
        
    }
    cout<<(SummationFact - SummationNonFact);
}

int main()
{
    Display();

    return 0;
}