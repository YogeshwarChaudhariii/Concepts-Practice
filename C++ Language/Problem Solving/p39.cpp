//  Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

/*
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)
*/

#include<iostream>
using namespace std;

double FhtoCs(float fTemp)
{
    float FindCelcius = 0.0;
    
    FindCelcius = (fTemp - 32) * (5.0 / 9.0);

    return FindCelcius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0f;
    
    cout<<"Enter Temprature in Fahrenheit: "<<endl;
    cin>>fValue;

    dRet = FhtoCs(fValue);

    cout<<fValue<<" Fahrenheit Temprature in Celsius Temprature is: "<<dRet<<endl;


    return 0;
}