#include<iostream>
using namespace std;

int main()
{
    int Arr[5];

    cout<<"Enter the elements: "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cin>>Arr[i];
    }

    cout<<"The elements are: "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<Arr[i]<<endl;
    }
    
    return 0;
}