// Find second largest element 

#include<iostream>
using namespace std;

int Display(int arr[], int iSize)
{
    int i = 0;
    int iLargest = arr[0];
    int iSecond = -1;

    for ( i = 0; i < iSize; i++)
    {
        if (arr[i] > iLargest)
        {
            iSecond = iLargest;
            iLargest = arr[i];
        }
        else if (arr[i] > iSecond && arr[i] != iLargest)
        {
            iSecond = arr[i];
        }
        
    }
    return iSecond;
}

int main()
{
    int iRet = 0;
    int Arr[5] = {11, 21, 51, 101, 121};

    iRet = Display(Arr, 5);

    cout<<"Second larget element is: "<<iRet<<endl;

    return 0;
}