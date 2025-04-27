// binary search implementation in array

#include <stdio.h>

// sorting
void sorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

// binary searching
void binarySearch(int arr[], int left, int right, int item)
{
    if (left > right)
    {
        printf("\nElement %d not found in the array.\n", item);
        return;
    }
    int mid = left+(left - right) / 2;
    if (arr[mid] == item)
    {
        printf("\nyour element %d is in %d index ,", item, mid);
        return;
    }
    else if (arr[mid] > item)
    {
        binarySearch(arr, left, mid - 1, item);
    }
    else
    {
        binarySearch(arr, mid + 1, right, item);
    }
}

int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the element of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sorting(arr, n);
    printf("enter the element of the array:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    int item;
    printf("\nenter the element want:");
    scanf("%d", &item);
    binarySearch(arr, 0, n - 1, item);
}