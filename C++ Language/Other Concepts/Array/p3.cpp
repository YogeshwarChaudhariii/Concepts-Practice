// 2D array
// Datatype ArrayName[rows][columns];

#include<iostream>
using namespace std;

int main()
{
    // int Arr[2][3] = {{11, 21}, {51, 101, 121}};
    int Arr[2][3];
    int iSize;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>Arr[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<Arr[i][j]<<" ";
        }
    }
    cout<<endl;

    iSize = sizeof(Arr) / sizeof(Arr[2][3]);
    cout<<"Size of array is: "<<iSize<<endl;
    

    return 0;
}
