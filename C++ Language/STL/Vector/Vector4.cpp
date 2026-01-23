// Two dimensional array

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> TwoDimensional;

    vector<int>Arr1;
    Arr1.push_back(11);
    Arr1.push_back(21);

    vector<int>Arr2;
    Arr2.push_back(51);
    Arr2.push_back(101);

    TwoDimensional.push_back(Arr1);
    TwoDimensional.push_back(Arr2);

    for (int i = 0; i < TwoDimensional.size(); i++)
    {
        for (int j = 0; j < TwoDimensional[i].size(); j++)
        {
            cout<<TwoDimensional[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
