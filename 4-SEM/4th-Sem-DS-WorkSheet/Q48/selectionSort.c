// selection sort
#include <stdio.h>

// selection sort

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

// print the array
void showArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[4] = {50, 16, 71, 14};
    selectionSort(arr, 4);
    showArray(arr, 4);

    return 0;
}