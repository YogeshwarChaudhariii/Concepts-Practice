// Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

/*
Input : 5
Output : 0.464515
Input : 7
Output : 0.650321
*/

#include<iostream>
using namespace std;

double SquareMeter(int iNo)
{
    double Conversion = 0.0;

    Conversion = iNo * 0.0929;

    return Conversion;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    cout<<"Enter a square feet: "<<endl;
    cin>>iValue;

    dRet = SquareMeter(iValue);

    cout<<"Square meter is: "<<dRet<<endl;


    return 0;
}