#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 3> Arr1 = {11, 21, 51};

    for (int i = 0; i < 3; i++)
    {
        cout<<Arr1.at(i)<<" ";
    }

    return 0;
}
