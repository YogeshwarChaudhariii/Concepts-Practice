#include<iostream>
using namespace std;

void Display(int arr[], int iSize)
{
    cout<<"Elements are: "<<endl;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
}

int main()
{
    int Arr[5];

    cout<<"Enter elements: "<<endl;

    for (int i = 0; i < 5; i++)
    {
       cin>>Arr[i];
    }

    Display(Arr, 5);
     


    return 0;
}