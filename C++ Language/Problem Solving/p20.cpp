// Write a program which accept number from user and return difference between summation of all its factors and non factors.

/*
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/

#include<iostream>
using namespace std;

void Summation(int iNo)
{
    int Addition1 = 0;
    int Addition2 = 0;
    int Ans = 0;

    for (int i = 1; i <= iNo - 1; i++)
    {
        if (iNo % i != 0)
        {
            Addition1 = Addition1 + i;
        }

        if (iNo % i == 0)
        {
            Addition2 = Addition2 + i;
        }
        
    }
    Ans = Addition2 - Addition1;
    cout<<Ans<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Summation(iValue);

    return 0;
}