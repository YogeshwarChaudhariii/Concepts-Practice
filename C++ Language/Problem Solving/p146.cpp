//  Calculate summation of array

#include<iostream>
using namespace std;

int Summation(int arr[], int iSize)
{
    int iSum = 0;

    for (int i = 0; i < iSize; i++)
    {
        iSum += arr[i];
    }
    return iSum;
}

int main()
{   
    int Arr[5];
    int iRet = 0;

    cout<<"Enter elements: "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cin>>Arr[i];
    }

    iRet = Summation(Arr, 5);

    cout<<"Summation of elements are: "<<iRet<<endl;
    

    return 0;
}