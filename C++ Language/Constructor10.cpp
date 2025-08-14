/*
Initializer List
Create a class Point with const int x and const int y as members. 
Use a constructor initializer list to set their values.
*/

#include<iostream>
using namespace std;

class Point
{
    public:
    const int x;
    const int y;

        Point(int A, int B) : x(A), y(B)
        {}
};

int main()
{
    Point pobj(11, 21);

    cout<<"Value of x is: "<<pobj.x<<endl;
    cout<<"Value of y is: "<<pobj.y<<endl;


    return 0;
}