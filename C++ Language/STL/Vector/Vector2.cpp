#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>Arr1(4, 0);      // {0, 0, 0, 0}; We can also use push_back();
    vector<int>Arr2(4, 10);     // {10, 10, 10, 10}; We can also use push_back();

    // vector<int>Arr3(Arr2.begin(), Arr2.end());
    // OR
    vector<int>Arr3(Arr2);
    cout<<"Elements of Arr3 are: "<<endl;
    for (int val : Arr3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}
