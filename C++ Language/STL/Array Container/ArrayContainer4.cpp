#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 3>Arr = {11, 21, 51};

    // auto will take datatype for it automatically
    // for each loop
    cout<<"Using auto keyword: ";

    for (auto iElements: Arr)
    {
        cout<<iElements<<" ";
    }

    

    return 0;
}
