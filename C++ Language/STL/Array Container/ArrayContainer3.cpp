#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 3> Arr;

    // Fill all elements with 11
    Arr.fill(11);

    for (int i = 0; i < 3; i++)
    {
        // cout<<Arr.at(i)<<" ";        //print elements using at function
        cout<<Arr[i]<<" ";
    }
    

    return 0;
}
