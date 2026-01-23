// Iterators

/*
    int Arr[3] = {11, 21, 51};

    1) begin()      points to first index of an array           ie. 11
    2) end()        points to right after the last element      ie. after 51
*/

#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 3>Arr = {11, 21, 51};

    // 'ptr' is a pointer it is initially pointing to 11
    // auto will take datatype for it automatically
    // for each loop
    cout<<"Print from first element: ";

    for (auto ptr = Arr.begin(); ptr != Arr.end(); ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

    

    return 0;
}
