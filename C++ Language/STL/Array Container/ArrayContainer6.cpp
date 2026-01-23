// Iterators

/*
    int Arr[3] = {11, 21, 51};

    1) rbegin()     points to last index of an array            ie. 51
    2) rend()       write before the start element              ie. 11
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
    cout<<"Print elements in reverse order: ";

    for (auto ptr = Arr.rbegin(); ptr != Arr.rend(); ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

    

    return 0;
}
