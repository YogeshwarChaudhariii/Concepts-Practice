// Find second largest element

#include<iostream>
using namespace std;

int LargestNumber(int arr[], int iSize)
{
    int iLargest = arr[0];
    int iSecond = 0;

    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] > iLargest)
        {
            iSecond = iLargest;
            iLargest = arr[i];
        } 
    }
    return iLargest;
}

int main()
{
    int iRet = 0;
    int Arr[5] = {11, 21, 51, 101, 111};

    iRet = LargestNumber(Arr, 5);
    cout<<"Second largest element is: "<<iRet<<endl;


    return 0;
}