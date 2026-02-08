// Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

/*
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 1
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1
*/

#include<iostream>
using namespace std;

int Display(int Arr[], int iLength, int iNo)
{
    int Add = 0;
    int iCount = 0;

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return i;
        }  
    }
    return -1;
} 

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
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

    iRet = Display(p, iSize, iValue);

    if (iRet == -1)
    {
        cout<<"There is no such member"<<endl;
    }
    else
    {
        cout<<"First occurence of number is: "<<iRet<<endl;
    }
    
    
    
    free(p);
    


    return 0;
}