// Dynamic memory allocation

#include<iostream>
using namespace std;

void Display(int arr[], int iSize)
{
    int iCnt = 0;

    cout<<"The elements are: "<<endl;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<arr[iCnt]<<endl;
    }
}

int main()
{   
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    // Allocate the memory
    ptr = new int[iLength];

    cout<<"Enter the elements: "<<endl;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    // Use that memory
    Display(ptr, iLength);
    


    // Free the memory
    free(ptr);
    



    return 0;
}