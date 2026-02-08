// Accept N numbers from user and accept Range, Display all elements from that range

/*
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88
*/

#include<iostream>
using namespace std;

int Display(int Arr[], int iLength, int iStart, int iEnd)
{
    int Add = 0;

    for (int i = 1; i < iLength; i++)
    {
        if ((Arr[i] > iStart) && (Arr[i] < iEnd))
        {
            cout<<Arr[i]<<" ";
        }  
    }
} 

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    cout<<"Enter number of elements: "<<endl;
    cin>>iSize;

    cout<<"Enter the starting point: "<<endl;
    cin>>iValue1;

    cout<<"Enter the ending point: "<<endl;
    cin>>iValue2;

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

    Display(p, iSize, iValue1, iValue2);


    
    free(p);
    


    return 0;
}