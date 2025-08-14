/*
Create a class Rectangle that takes length and width as 
parameters in a constructor and calculates the area.
*/

#include<iostream> 
using namespace std;

class Rectangle
{
    public:
        float Length, Width;

        Rectangle(float A, float B)
        {
            Length = A;
            Width = B;
        }

        float Area()
        {
            float Ans = 0.0f;
            Ans = Length * Width;
            return Ans;
        }
};

int main()
{
    Rectangle robj(11, 21);
    float fRet = 0.0f;

    fRet = robj.Area();
    cout<<"Area of rectangle is: "<<fRet<<endl;
   


    return 0;
}