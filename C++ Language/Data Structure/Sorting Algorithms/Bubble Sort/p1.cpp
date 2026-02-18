#include<iostream>
using namespace std;

// Time complexity O(n^2)
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            
        }
        
    }
    
}

void Display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
}

int main()
{
    int n = 5;

    int Arr[] = {4, 1, 5, 2, 3};

    BubbleSort(Arr, n);
    Display(Arr, n);


    return 0;
}
