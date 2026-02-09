// Accept n number from user and display all such members which contains 3 digit in it;

/*
Input : N : 6
Elements :8225 665 3 76 953 858
Output : 665 953 858
*/

#include<iostream>
using namespace std;

void Digits(int Arr[], int iLength)
{
    int iTemp = 0, iCount = 0;

    for (int i = 0; i < iLength; i++)
    {
        iTemp = Arr[i];
        iCount = 0;

        while (iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCount++;
        }

        if (iCount == 3)
        {
            cout<<Arr[i]<<" ";
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