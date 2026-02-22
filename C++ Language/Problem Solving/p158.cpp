// Search element

#include<iostream>
#include<stdbool.h>
using namespace std;

bool Search(int arr[], int iSize, int iNo)
{
    int i = 0;

    if ((arr == NULL) || (iSize <= 0))
    {
        return false;
    }
    
    for (i = 0; i < iSize; i++)
    {
        if (arr[i] == iNo)
        {
            break;
        }
    }

    return !(i == iSize);   // update
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, iValue = 0;
    bool bRet = false;

    cout<<"Enter the number of elements: "<<endl;
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
        cout<<endl<<"Enter the "<<i + 1<<" number: ";
        cin>>Arr[i];
    }

    cout<<"Enter the element to find: "<<endl;
    cin>>iValue;

    bRet = Search(Arr, iLength, iValue);

    if (bRet == true)
    {
        cout<<iValue<<" is present"<<endl;
    }
    else
    {
        cout<<iValue<<" is not present"<<endl;
    }
    
    
    


    return 0;
}