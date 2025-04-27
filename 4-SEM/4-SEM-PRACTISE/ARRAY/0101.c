// deletion and insertion

#include <stdio.h>
#define MAX 100

// insertion
void Insert(int arr[], int *n)
{
    int index, value;
    printf("enter the index where you want to insert:");
    scanf("%d", &index);
    printf("eneter the value you want to insert:");
    scanf("%d", &value);

    if (index < 0 || index > MAX || index > *n)
    {
        printf("index %d is invalid .\n", index);
        return;
    }
    for (int i = *n; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
    (*n)++;
}

// deletion
void deletion(int arr[], int *n)
{
    int delm;
    int dindex = -1;
    printf("enter the element you want to delete: ");
    scanf("%d", &delm);
    for (int i = 0; i < *n; i++)
    {
        if (arr[i] == delm)
        {
            dindex = i;
        }
    }
    if (dindex == -1)
    {
        printf("element is not in array;\n");
        return;
    }
    printf("%d\n", dindex);
    for (int j = dindex; j <= *n; j++)
    {
        arr[j] = arr[j + 1];
    }
    (*n)--;
}

// print
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n = 5;
    int arr[MAX] = {4, 2, 7, 1, 4};
    Insert(arr, &n);
    Insert(arr, &n);
    printArr(arr, n);
    deletion(arr, &n);
    printArr(arr, n);
}