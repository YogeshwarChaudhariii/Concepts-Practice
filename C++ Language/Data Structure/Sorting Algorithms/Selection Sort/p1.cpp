#include<iostream>
using namespace std;

// Time complexity O(n^2)
void SelectionSort(int arr[], int n)
{
    int SmallestIndex = 0;

    for (int i = 0; i < n - 1; i++)
    {
        SmallestIndex = i;          // Unsorted array part starting

        // Loop for unsorted array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[SmallestIndex])
            {
                SmallestIndex = j;
            }
            
        }
        swap(arr[i], arr[SmallestIndex]);
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

    SelectionSort(Arr, n);
    Display(Arr, n);


    return 0;
}
