// Count even

#include<iostream>
using namespace std;

int CountEven(int arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    cout<<"Enter the length of elements: "<<endl;
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements: "<<endl;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    iRet = CountEven(ptr, iLength);

    cout<<"Count of elements are: "<<iRet<<endl;
    free(ptr);
    

    return 0;
}