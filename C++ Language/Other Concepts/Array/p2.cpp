#include<iostream>
using namespace std;

int main()
{
    int Arr[5];
    int iSize;

    for (int i = 0; i < 5; i++)
    {
        cin>>Arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

    iSize = sizeof(Arr) / sizeof(Arr[5]);
    cout<<"Size of array is: "<<iSize<<endl;
    

    return 0;
}
