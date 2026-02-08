// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

/*
Input : N : 6
Elements :85 66 3 80 93 88

Output : 53 (234 - 181)
*/

#include<iostream>
using namespace std;

int Difference(int Arr[], int iLength)
{
    int EvenNo = 0, OddNo = 0;

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            EvenNo = EvenNo + Arr[i];
        }
        else
        {
            OddNo = OddNo + Arr[i];
        }
    }
    return EvenNo - OddNo;;
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
        cout<<"unable to allocate memory"<<endl;
        return -1;
    }

    cout<<"Enter elements: "<<endl;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter elements: "<<iCnt + 1<<" ";
        cin>>p[iCnt];
    }

    iRet = Difference(p, iSize);

    cout<<"Result is: "<<iRet<<endl;

    free(p);
    
    

    return 0;
}