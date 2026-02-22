// Frequency

#include<iostream>
using namespace std;

int Frequency(int arr[], int iSize, int iNo)
{
    int i = 0, iCount = 0;

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] == iNo)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, iRet = 0, iValue = 0;

    cout<<"Enter the length: "<<endl;
    cin>>iLength;

    Arr = new int[iLength];
    if (Arr == NULL)
    {
        cout<<"Unable to allocate memory"<<endl;
        return -1;
    }
    

    cout<<"Enter the elements: "<<endl;
    
    for (int i = 0; i < iLength; i++)
    {
        cout<<endl<<"Enter the "<<i + 1<<" element: ";
        cin>>Arr[i];
    }

    cout<<"Enter the element to find in an array: "<<endl;
    cin>>iValue;

    iRet = Frequency(Arr, iLength, iValue);

    if (iRet == -1)
    {
        cout<<"There is issue in the input"<<endl;
        return -1;
    }
    else
    {
        cout<<"Frequency of an "<<iValue<<" is: "<<iRet<<endl;
    }


    free(Arr);
    


    return 0;
}