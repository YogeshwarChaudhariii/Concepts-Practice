// Accept N numbers from user and display summation of digits of each number.

/*
Input : N : 6
Elements :8225 665 3 76 953 858
Output : 17 17 3 13 17 21
*/

#include<iostream>
using namespace std;

void Digits(int Arr[], int iLength)
{
    int iTemp = 0, iCount = 0, iAdd = 0;

    for (int i = 0; i < iLength; i++)
    {
        iTemp = Arr[i];
        iAdd = 0;           // reset sum of each no

        while (iTemp != 0)
        {
            iAdd += (iTemp % 10);
            iTemp = iTemp / 10;
        }

        cout<<iAdd<<" ";
    }
    
}

int main()
{   
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    cout<<"Enter number of elements: "<<endl;
    cin>>iSize;

    p = (int *)malloc(iSize * sizeof(int));

    p = new int[iSize];

    if (p == NULL)
    {
        cout<<"Unable to allocate memory"<<endl;
        return -1;
    }

    cout<<"Enter elements: "<<endl;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter elements: "<<iCnt + 1<<" ";
        cin>>p[iCnt];
    }

    Digits(p, iSize);

    delete[] p;
    
    

    

    return 0;
}