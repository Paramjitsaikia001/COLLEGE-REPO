// implementation of binary search tree using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation failed;");
        return 0;
    }
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

struct node * insertnode(struct node *root, int value)
{
    if (root == NULL)
    {
        root=createnode(value);
        return root;
    }
    if (value < root->data)
    {
       root->left= insertnode(root->left, value);
    }
    else if (value > root->data)
    {
       root->right= insertnode(root->right, value);
    }
   return root;
}

void inorder(struct node *root){
    if(root!=NULL){
    
    inorder(root->left);
    printf(" %d ",root->data);
    inorder(root->right);
    }
}

int main(){
    // printf("the elements are:");
    struct node *start=NULL;
   start= insertnode(start,4);
    insertnode(start,3);
    insertnode(start,6);
    insertnode(start,1);
    insertnode(start,0);
printf("inorder BST:");
    inorder(start);
    printf("\n");

    return 0;
    
}