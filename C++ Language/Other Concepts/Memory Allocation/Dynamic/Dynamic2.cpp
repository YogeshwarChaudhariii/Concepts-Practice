#include<iostream>
using namespace std;

int main()
{
    int Arr[5];     // Static
    int iSize = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements: "<<endl;
    cin>>iSize;

    ptr = new int[iSize];       // Dynamic

    if (ptr == NULL)
    {
        cout<<"Unable to allocate memory..!"<<endl;
        return -1;
    }
    else
    {
        cout<<"Memory gets allocated succesfully..."<<endl;
    }

    delete[] ptr;

    return 0;
}
