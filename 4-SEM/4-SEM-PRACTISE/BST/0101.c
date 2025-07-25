// create a preorder binary tree

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};

int ind = -1;
struct node *createBST(int preorder[])
{
    ind++;
    if (preorder[ind] == -1)
    {
        return NULL;
    }
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = preorder[ind];
    root->left = createBST(preorder);
    root->right = createBST(preorder);

    return root;
}

// preorder traversal
void preorderT(struct node *root)
{

    if (root != NULL)
    {
        printf(" %d ", root->data);
        preorderT(root->left);
        preorderT(root->right);
    }
}

// inorder traversal
void inorderT(struct node *root)
{
    if (root == NULL)
        return;
    inorderT(root->left);
    printf(" %d ", root->data);
    inorderT(root->right);
}

// postorder traversal
void postorderT(struct node *root)
{
    if (root == NULL)
        return;
    postorderT(root->left);
    postorderT(root->right);
    printf(" %d ", root->data);
}
int main()
{
    int preorder[] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    struct node *start = createBST(preorder);
    // printf(" %d ",start->data);
    // printf(" %d ",start->left->data);
    // printf(" %d ",start->right->data);

    printf("preorder traversal : ");
    preorderT(start);
    printf("\ninorder traversal: ");
    inorderT(start);
    printf("\npostorder traversal: ");
    postorderT(start);
    // printf("
    return 0;
}