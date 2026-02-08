// Accept N numbers from user and return product of all odd elements.

/*
Input : N : 6
Elements :15 66 3 70 10 88
Output : 45
Input : N : 6
Elements :44 66 72 70 10 88
Output : 0
*/

#include<iostream>
using namespace std;

int Display(int Arr[], int iLength)
{
    int iProduct = 1, iEven = 0;

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iProduct *= Arr[i];
        }  
        else
        {
            iEven++;
        }
    }

    if(iEven == iLength)
    {
        iProduct = 0;
    }

    return iProduct;
} 

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Display(p, iSize);
    cout<<iRet<<endl;


    
    free(p);
    


    return 0;
}