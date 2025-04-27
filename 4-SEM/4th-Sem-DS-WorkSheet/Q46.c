/*
 Implement binary search tree using array by writing a program to:
a. Create a binary search tree using array
b. Print the prefix notation of the BST
c. Print the infix notation of the BST
d. Print the postfix notation of the BST
e. Search for an element in the BST
*/

#include <stdio.h>
#define MAX 20
void BST(int arr[], int value)
{
    int i = 0;
    while (i < MAX)
    {
        if (arr[i] == -1)
        {
            arr[i] = value;
            return;
        }
        else if (value < arr[i])
        {
            i = 2 * i + 1;
        }
        else if (value > arr[i])
        {
            i = 2 * i + 2;
        }
        else{
            printf("no duplicy allow.\n");
        return;}
    }
}

void preorder(int bst[], int index)
{ // prefix
    if (index >= MAX || bst[index] == -1)
        return;
    printf("%d ", bst[index]);
    preorder(bst, 2 * index + 1);
    preorder(bst, 2 * index + 2);
}

int main()
{
    int n;
    int arr[MAX];
    for (int i = 0; i < MAX; i++)
        arr[i] = -1;

    printf("enter the size of the array:");
    scanf("%d", &n);
    printf("enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        int value;
        scanf("%d", &value);
        BST(arr, value);
    }

    printf("\nPrefix Traversal (Preorder): ");
    preorder(arr, 0);

    return 0;
}