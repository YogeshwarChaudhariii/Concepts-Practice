// Problem Statement: Accept radius from user and calculate the area of circle

#include<iostream>
using namespace std;

float AreaOfCircle(float iValue1, float iValue2)
{
    float Calculate;

    Calculate = iValue2 * iValue1 * iValue1;
    return Calculate;
}

int main()
{
    float fRadius;
    float fPi = 3.14;
    float Area;

    cout<<"Enter the radius: "<<endl;
    cin>>fRadius;

    Area = AreaOfCircle(fRadius, fPi);

    cout<<"Area of circle is: "<<Area;

    return 0;
}