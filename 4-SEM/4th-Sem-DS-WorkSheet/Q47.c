// Implement binary search tree using linked list by writing a program to:
// a. Create a binary search tree using linked list
// b. Print the prefix notation of the BST
// c. Print the infix notation of the BST
// d. Print the postfix notation of the BST
// e. Search for an element in the BST

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createBST(int val)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = newnode->right = NULL;
    return newnode;
}

// Function to insert a node in the BST
struct node *insert(struct node *root, int value)
{
    if (root == NULL)
    {
        return createBST(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    return root;
}

void infix(struct node *root)
{
    if (root != NULL)
    {
        infix(root->left);
        printf(" %d ", root->data);
        infix(root->right);
    }
}
int main()
{
    struct node *BST = NULL;
    int value;
    for (int i = 0; i < 4; i++)
    {
        printf("the %d element : ", i);
        scanf("%d", &value);
        BST = insert(BST, value);
    }
    infix(BST);
    return 0;
}