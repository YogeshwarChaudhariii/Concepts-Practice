// Accept N numbers from user and return the difference between largest and smallest number.

/*
Input : N : 6
Elements :85 66 3 66 93 88
Output : 90 (93 -3)
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int iLarge = 0;
    int iSmall = 0;

    iLarge = Arr[0];
    iSmall = Arr[0];

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] > iLarge)
        {
            iLarge = Arr[i];
        }

        if (Arr[i] < iSmall)
        {
            iSmall = Arr[i];
        }
    }
    return iLarge - iSmall;
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