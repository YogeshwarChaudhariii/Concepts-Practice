#include<iostream>
using namespace std;

class Demo
{
    private:
        int x;

    public:
        Demo(int a)
        {
            x = a;
        }

        friend void Display(Demo obj);
};

void Display(Demo obj)
{
    cout<<"Value of x: "<<obj.x<<endl;
}

int main()
{
    Demo d(11);
    Display(d);

    return 0;
}
