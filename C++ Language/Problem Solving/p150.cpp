// Count odd

#include<iostream>
using namespace std;

int CountOdd(int arr[], int iSize)
{
    int iCount = 0;

    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] % 2 != 0)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, iRet = 0;

    cout<<"Enter the elements: "<<endl;
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"Enter the elements: "<<endl;

    for (int i = 0; i < iLength; i++)
    {
        cin>>Arr[i];
    }

    iRet = CountOdd(Arr, iLength);

    cout<<"Count of odd elements are: "<<iRet<<endl;

    free(Arr);
    

    return 0;
}