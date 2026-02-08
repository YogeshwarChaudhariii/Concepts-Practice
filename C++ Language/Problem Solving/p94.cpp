// Accept N numbers from user and return frequency of 11 form it.

/*
Input : N : 6
Elements :85 66 3 15 93 88
Output : 0
Input : N : 6
Elements :85 11 3 15 11 111
Output : 2
*/

#include<iostream>
using namespace std;

void Display(int Arr[], int iLength)
{
    int Add = 0;
    int iCount = 0;

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == 11)
        {
            iCount++;
        }
    }
    cout<<"Frequency of 11 is: "<<iCount<<endl;
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

    Display(p, iSize);
    
    free(p);
    


    return 0;
}