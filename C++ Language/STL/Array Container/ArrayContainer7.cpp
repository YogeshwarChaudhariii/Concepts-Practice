// Iterators

/*
    int Arr[3] = {11, 21, 51};

    1) begin()      points to first index of an array           ie. 11
    2) rbegin()     points to last index of an array            ie. 51
    3) end()        points to right after the last element      ie. after 51
    4) rend()       write before the start element              ie. 11
    5) size()       size of an array                            ie. 3
    6) front()      print first element                         ie. 11
    7) back()       print last element                          ie. 51
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
    cout<<"Elements are: ";

    for (auto ptr = Arr.begin(); ptr != Arr.end(); ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

    cout<<"Size of an array is: "<<Arr.size()<<endl;
    cout<<"First element of an array is: "<<Arr.front()<<endl;
    cout<<"Last element of an array is: "<<Arr.back()<<endl;

    

    return 0;
}
