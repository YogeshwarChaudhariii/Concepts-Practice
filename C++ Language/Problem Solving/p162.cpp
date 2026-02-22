// Minimum

#include<iostream>
using namespace std;

int Minimum(int arr[], int iSize)
{
    int iMin = 0;

    iMin = arr[0];

    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] < iMin)
        {
            iMin = arr[i];
        }
        
    }
    return iMin;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, iRet = 0, iCnt = 0;

    cout<<"Enter number of elements: "<<endl;
    cin>>iLength;

    Arr = new int[iLength];

    if (Arr == NULL)
    {
        cout<<"Unable to allocate memory"<<endl;
        return -1;
    }

    cout<<"Enter the elements: "<<endl;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<endl<<"Enter the "<<iCnt + 1<<" element: ";
        cin>>Arr[iCnt];
    }

    iRet = Minimum(Arr, iLength);

    cout<<"Minimum number is: "<<iRet<<endl;

    free(Arr);    
    


    return 0;
}