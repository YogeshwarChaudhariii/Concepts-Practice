#include<iostream>
using namespace std;

// Time complexity O(n^2)
void InsertionSort(int arr[], int n)
{
    int Current = 0;
    int Previous = 0;

    for (int i = 1; i < n; i++)
    {   
        Current = arr[i];
        int Previous = i - 1;

        while (Previous >= 0 && arr[Previous] > Current)
        {
            arr[Previous + 1] = arr[Previous];
            Previous--;
        }
        // Placing the current elemens intits correct position
        arr[Previous + 1] = Current;        
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

    InsertionSort(Arr, n);
    Display(Arr, n);


    return 0;
}
