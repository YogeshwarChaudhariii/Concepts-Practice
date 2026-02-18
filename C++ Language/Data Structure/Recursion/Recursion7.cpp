#include<iostream>
using namespace std;

void Display()
{
    static int i = 0;

    if (i < 5)
    {
        cout<<"Jay Ganesh"<<endl;

        i++;

        Display();
    }
}

int main()
{
    Display();
    cout<<"End of main"<<endl;

    return 0;
}