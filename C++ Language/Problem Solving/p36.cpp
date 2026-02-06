// Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

/*
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.622
*/

#include<iostream>
using namespace std;

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    float Area = 0.0f;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float Radius = 0.0f;
    float fRet = 0.0f;

    cout<<"Enter a radius: "<<endl;
    cin>>Radius;

    fRet = CircleArea(Radius);

    cout<<"Area of circle is: "<<fRet<<endl;


    return 0;
}