// Add elements in an array

#include<iostream>
using namespace std;

int main()
{
    int Arr[5];

    cout<<"Enter elements: "<<endl;
    
    for (int i = 0; i < 5; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Elements are: "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<Arr[i];
    }
    
    


    return 0;
}