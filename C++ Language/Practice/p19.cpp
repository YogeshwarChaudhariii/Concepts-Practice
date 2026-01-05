#include<iostream>
using namespace std;

int main()
{
    int Arr[5];

    cout<<"Enter the 5 elements: "<<endl;
    cin>>Arr[0];
    cin>>Arr[1];
    cin>>Arr[2];
    cin>>Arr[3];
    cin>>Arr[4];

    cout<<"Elements from the array: "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<Arr[i]<<endl;
    }
    

    return 0;
}