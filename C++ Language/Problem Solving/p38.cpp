// Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)

/*
Input : 5
Output : 5000
Input : 12
Output : 12000
*/

#include<iostream>
using namespace std;

double KMtoMeter(int iNo)
{
    const int Meter = 1000;
    int FindMeter = 0;

    FindMeter = Meter * iNo; 

    return FindMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<<"Enter Kilometer: "<<endl;
    cin>>iValue;

    iRet = KMtoMeter(iValue);

    cout<<iValue<<" kilometer in meter is: "<<iRet<<endl;


    return 0;
}