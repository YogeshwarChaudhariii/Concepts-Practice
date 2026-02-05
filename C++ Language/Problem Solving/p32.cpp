// Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees. 

/*
Input : 10
Output : 700
Input : 3
Output : 210
Input : 1200
Output : 84000
*/

#include<iostream>
using namespace std;

int DollarToINR(int USD)
{
    const int INR = 70;
    int Conversion = 0;

    Conversion = USD * INR;

    return Conversion;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number of USD: "<<endl;
    cin>>iValue;

    iRet = DollarToINR(iValue);

    cout<<"Value in INR is: "<<iRet<<endl;


    return 0;
}