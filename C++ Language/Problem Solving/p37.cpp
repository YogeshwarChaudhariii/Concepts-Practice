// Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

/*
Input : 5.3 9.78
Output : 51.834
*/

#include<iostream>
using namespace std;

double RectArea(float fWidth, float fHeight)
{
    float Area = 0.0f;

    Area = fWidth * fHeight;

    return Area;
}

int main()
{
    float Height = 0.0f;
    float Width = 0.0f;
    float fRet = 0.0f;

    cout<<"Enter a Height: "<<endl;
    cin>>Height;

    cout<<"Enter a Width: "<<endl;
    cin>>Width;

    fRet = RectArea(Width, Height);

    cout<<"Area of rectangle is: "<<fRet<<endl;


    return 0;
}