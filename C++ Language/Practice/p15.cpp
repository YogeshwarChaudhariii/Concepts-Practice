// Calculate Factor
// 5 : 1 * 2 * 3 * 4 * 5 = 120

#include<iostream>
using namespace std;

void Factors(int iValue)
{

    for (int i = 1; i <= iValue; i++)
    {
        if ((iValue % i) == 0)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int iNo = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    Factors(iNo);

    return 0;
}