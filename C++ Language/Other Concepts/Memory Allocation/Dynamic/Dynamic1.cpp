#include<iostream>
using namespace std;

int main()
{
    int *Arr = new int[5];      // Allocated at runtime

    Arr[0] = 10;
    cout<<Arr[0];

    delete[] Arr;       // Must free memory

    return 0;
}
