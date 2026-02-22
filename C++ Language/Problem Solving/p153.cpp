#include<iostream>
using namespace std;

int SumOdd(int arr[], int iSize)
{
    int iSum = 0;
    int i;

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] % 2 != 0)
        {
            iSum = iSum + arr[i];
        }
        
    }
    return iSum;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, iRet = 0;

    cout<<"Enter the length: "<<endl;
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"Enter the elements: "<<endl;
    
    for (int i = 0; i < iLength; i++)
    {
        cin>>Arr[i];
    }

    iRet = SumOdd(Arr, iLength);

    cout<<"Addition of an array is: "<<iRet<<endl;

    free(Arr);
    


    return 0;
}