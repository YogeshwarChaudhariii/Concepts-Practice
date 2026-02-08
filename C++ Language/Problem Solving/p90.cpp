// Accept N numbers from user and display all such elements which are multiples of 11.

/*
Input : N : 6
Elements :85 66 3 55 93 88
Output : 66 55 88
*/

#include<iostream>
using namespace std;

void Display(int Arr[], int iLength)
{
    int Add = 0;

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 11 == 0)
        {
            cout<<"Multiples of 11 elements are: "<<Arr[i]<<endl;
        }
    }
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