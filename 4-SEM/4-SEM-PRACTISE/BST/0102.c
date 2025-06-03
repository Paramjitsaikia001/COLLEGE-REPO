// bst

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation failed.\n");
        return NULL;
    }
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// creation
struct node *createBST(struct node *start, int data)
{
    if (start == NULL)
    {
        return createNode(data);
    }
    if (data < start->data)
    {
        start->left = createBST(start->left, data);
    }
    else if (data > start->data)
    {
        start->right = createBST(start->right, data);
    }
    else
    {
        printf(" no duplicy allowed 😡.\n");
    }
    return start;
}

// insertion at the end
struct node *insertBST(struct node *start, int key)
{
    struct node *prev;
    if (start == NULL)
    {
        printf("BST is empty 🪹.\n");
        return NULL;
    }
    while (start != NULL)
    {
        prev = start;
        if (key == start->data)
        {
            printf("cannot insert ❌,already exist.🫵.\n");
            return start;
        }
        else if (key < start->data)
        {
            start = start->left;
        }
        else if (key > start->data)
        {
            start = start->right;
        }
    }
    if (key < prev->data)
    {
        prev->left = createNode(key);
    }
    else
        prev->right = createNode(key);

    return start;
}


//find the successor
struct node *InorderSuccessor(struct node *start){
    while(start->left!=NULL){
        start=start->left;
    }
    return start;
}


// deletion in BST
/*
for the deletion in BST , there should be three cases

case 1 : if the node is leaf node ( no child). then we delete the code and noting to do
case 2 : if the node has one child . then we need to replace the child node with the node that we need to delete
case 3 : if the node has both child . then we need to replace with the inorder successor or predeccessor with the node

*/

// deletion
struct node *deletion(struct node *start, int key)
{
    if(start==NULL){
        printf("BST is empty😩.\n");
        return NULL;
    }
    if(key<start->data){
        start->left=deletion(start->left,key);
    }
    else if (key > start->data){
        start->right=deletion(start->right,key);
    }else{
        if(start->left==NULL){
            struct node *temp=start->right;
            free(start);
            return temp;
        }else if(start->right==NULL){
            struct node *temp=start->left;
            free(start);
            return temp;
        }
        struct node *temp=InorderSuccessor(start->right);
        start->data=temp->data;
        start->right=deletion(start->right,temp->data);
    }
    return start;
}

void preorder(struct node *start)
{
    if (start == NULL)
        return;
    printf(" %d ", start->data);
    preorder(start->left);
    preorder(start->right);
}

int main()
{
    struct node *BST = NULL;

    for (int i = 0; i < 6; i++)
    {
        int value;
        printf("enter the elements for index %d : ", i);
        scanf("%d", &value);
        BST = createBST(BST, value);
    }
    printf("preorder binary tree:");
    preorder(BST);

/*

       4
     /   \
    1     89
     \     \
      2     90
       \
        3


*/

    printf("\ninserting 7 :");
    BST= insertBST(BST,7);
    preorder(BST);

/*

       4
     /   \
    1     89
     \   /  \
      2 7    90
       \
        3


*/


    //   printf("\ndeleting 9 :");
    // deletion(BST,9);
    // preorder(BST);

      printf("\ndeleting 4 :");
    deletion(BST,4);
    preorder(BST);

    return 0;
}