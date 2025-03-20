// insertion sorting
#include <stdio.h>

// insertion sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    int arr[4] = {50, 65, 13, 400};
    insertionSort(arr, 4);
    showArray(arr, 4);

    return 0;
}