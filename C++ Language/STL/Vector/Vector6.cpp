// Reverse a Vector

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> No{11, 21, 51, 101, 111};

    for (int i = 4; i >= 0; i--)
    {
        cout<<No[i]<<" ";
        
    }
    
    return 0;
}
