// Sorted array [1, 2, 3, 4, 5] 
// bubble sort iterates n^2 time on sorted array also
// using bool we can optimize the code

#include<iostream>
using namespace std;

// Time complexity O(n^2)
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
            
        }
        // if not done any swapping the array is already sorted
        if (!isSwap)        
        {
            return;
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

    int Arr[] = {1, 2, 3, 4, 5};

    BubbleSort(Arr, n);
    Display(Arr, n);


    return 0;
}
