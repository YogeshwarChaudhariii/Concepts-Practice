// Write a program which accept number from user and return summation of all its non factors

/*
Input : 12
Output : 50
Input : 10
Output : 37
*/

#include<iostream>
using namespace std;

void Summation(int iNo)
{
    int Addition = 0;
    for (int i = 1; i <= iNo; i++)
    {
        if (iNo % i != 0)
        {
            Addition = Addition + i;
        }
        
    }
    cout<<Addition<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Summation(iValue);

    return 0;
}