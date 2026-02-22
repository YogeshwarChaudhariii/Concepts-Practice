// Summation

#include<iostream>
using namespace std;

int Summation(int arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum += arr[iCnt];
    }
    return iSum;
}

int main()
{   
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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
    iRet = Summation(ptr, iLength);

    cout<<"Summation of an array is: "<<iRet<<endl;
    


    // Free the memory
    free(ptr);
    



    return 0;
}