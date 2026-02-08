// Accept N numbers from user check whether that numbers contains 11 init or not.

/*
Input : N : 6
Elements :85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements :85 66 3 80 93 88
Output : 11 is absent
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(int Arr[], int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
} 

int main()
{
    int iSize = 0, bRet = 0, iCnt = 0;
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

    bRet = Display(p, iSize);

    if (bRet == TRUE)
    {
        cout<<"11 is present"<<endl;
    }
    else
    {
        cout<<"11 is absent"<<endl;
    }
    
    
    
    free(p);
    


    return 0;
}