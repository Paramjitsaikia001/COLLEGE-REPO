/*indexed searching :
1. divided the sorted array into equal no of the blocks
2. then find the key in the blocks
*/

#include <stdio.h>
#define BLOCK 5
#define SIZE 15
int indexedSearching(int arr[], int n, int k)
{
    int i, blockstart = -1;
    for (i = 0; i < n; i += BLOCK)
    {
        if (k >= arr[i] && k <= arr[i + BLOCK - 1])
        {
            blockstart = i;
            break;
        }
    }
    for (i = blockstart; i < blockstart + BLOCK && i < n; i++)
    {
        if (k == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[SIZE] = {5, 9, 13, 18, 22, 26, 31, 36, 41, 47, 52, 59, 63, 69, 75};
    int k = 36;

    int index = indexedSearching(arr, SIZE, k);
    if (index != -1)
    {
        printf(" %d is in index %d ", k, index);
    }
    else
        printf(" %d is not found ", k);

    return 0;
}