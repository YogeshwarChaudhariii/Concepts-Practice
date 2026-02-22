#include<iostream>
using namespace std;

int PrintEven(int arr[], int iSize)
{
    int i = 0;

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            return i;
        }
        i++;
    }

}

int main()
{
    int *Arr = NULL;
    int iLength = 0, iRet = 0;

    cout<<"Enter the length: "<<endl;
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"Enter the elements: "<<endl;
    
    for (int i = 0; i < iLength; i++)
    {
        cin>>Arr[i];
    }

    iRet = PrintEven(Arr, iLength);

    cout<<"Even elements of an array are: "<<iRet<<endl;

    free(Arr);
    


    return 0;
}