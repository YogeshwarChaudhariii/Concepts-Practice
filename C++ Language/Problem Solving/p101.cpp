// Accept N numbers from user and return the largest number.

/*
Input : N : 6
Elements :85 66 3 66 93 88
Output : 93
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int iLarge = 0;

    iLarge = Arr[0];

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] > iLarge)
        {
            iLarge = Arr[i];
        }
        
    }
    return iLarge;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    cout<<"Enter number of elements: "<<endl;
    cin>>iSize;


    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        cout<<"Unable to allocate memory"<<endl;
        return -1;
    }

    cout<<"Enter elements: "<<endl;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter elements: "<<iCnt + 1<<" "<<endl;
        cin>>p[iCnt];
    }

    iRet = Maximum(p, iSize);
    cout<<iRet<<endl;


    
    free(p);
    
    


    return 0;
}