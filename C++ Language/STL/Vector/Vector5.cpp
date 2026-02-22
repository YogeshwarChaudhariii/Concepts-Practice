// Find Maximum and Minimum Element

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> No{11, 21, 51, 101, 111};
    int iLargest = No[0];
    int iSmallest = No[0];

    for (int i = 0; i < 5; i++)
    {
        if (No[i] > iLargest)
        {
            iLargest = No[i];
        }

        if (No[i] < iSmallest)
        {
            iSmallest = No[i];
        }
        
    }
    
    cout<<iLargest<<endl;
    cout<<iSmallest<<endl;

    

    return 0;
}
