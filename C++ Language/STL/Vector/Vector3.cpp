#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>Demo;

    Demo.emplace_back(1);       // Takes less time / Slightly faster than push_back() (both are same)

    Demo.push_back(11);
    Demo.push_back(21);
    Demo.push_back(51);
    Demo.push_back(101);

    for(int val : Demo)
    {
        cout<<val<<" ";
    }
    cout<<endl;

                          //Start       //End
    vector<int>Demo1(Demo.begin(), Demo.begin() + 2);
    cout<<"First two elements: "<<endl;

    for(int val : Demo1)
    {
        cout<<val<<" ";
    }

    return 0;
}
