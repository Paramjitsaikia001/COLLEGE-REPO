// selection sorting practise for sessional practical exam

#include <stdio.h>

void smallest_element(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        int min = j;
        for (int i = j+1; i < n; i++)
        {
            if (arr[min] > arr[i])
            {
                min = i;
            }
        }
        int t=arr[min];
        arr[min]=arr[j];
        arr[j]=t;
    }

   
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}

void sort(int arr[], int n)
{
}

int main()
{
    int arr[4] = {23, 2, 34, 1};
    smallest_element(arr, 4);
    // sort(arr,4);

    return 0;
}