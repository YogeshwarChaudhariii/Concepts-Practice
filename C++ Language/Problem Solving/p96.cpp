// Accept N numbers from user and accept one another number as NO , check whether NO is present or not.

/*
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Display(int Arr[], int iLength, int iNo)
{
    int Add = 0;
    int iCount = 0;

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
} 

int main()
{
    int iSize = 0, bRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    cout<<"Enter number of elements: "<<endl;
    cin>>iSize;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

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

    bRet = Display(p, iSize, iValue);

    if (bRet == TRUE)
    {
        cout<<"Number is present"<<endl;
    }
    else
    {
        cout<<"Number is absent"<<endl;
    }
    
    
    
    free(p);
    


    return 0;
}