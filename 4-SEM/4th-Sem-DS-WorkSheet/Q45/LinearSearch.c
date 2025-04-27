// implement Linear search on arrays

#include <stdio.h>

void linearSearch(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            printf("\nyour element %d is in %d index \n", arr[i], i);
            return;
        }
    }
    printf("\nthe element is alien.\n");
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
    int item;
    printf("enter the element you are looking for:");
    scanf("%d", &item);
    linearSearch(arr, n, item);

    return 0;
}