// Search element

#include<iostream>
#include<stdbool.h>
using namespace std;

bool Search(int arr[], int iSize)
{
    int i = 0;
    
    for (i = 0; i < iSize; i++)
    {
        if (arr[i] == 11)
        {
            return true;
        }
    }
    if (arr[i] != 11)
    {
        return false;
    }   
}

int main()
{
    int *Arr = NULL;
    int iLength = 0;
    bool bRet = false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"Enter the elements: "<<endl;

    for (int i = 0; i < iLength; i++)
    {
        cin>>Arr[i];
    }

    bRet = Search(Arr, iLength);

    if (bRet == true)
    {
        cout<<"11 is present"<<endl;
    }
    else
    {
        cout<<"11 is not present"<<endl;
    }
    
    
    


    return 0;
}