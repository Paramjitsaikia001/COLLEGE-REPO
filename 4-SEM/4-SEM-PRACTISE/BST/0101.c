//create a preorder binary tree

#include<stdio.h>
#include<stdlib.h>
#define index -1
struct node {
    int data;
    struct node *right;
    struct node *left;
};

int ind=-1;
struct node *createBST(int preorder[]){
ind++;
if(preorder[ind] ==-1){
    return NULL;
}
struct node *root = (struct node * )malloc(sizeof(struct node ));
root->data=preorder[ind];
root->left=createBST(preorder);
root->right=createBST(preorder);

return root;
}

int main(){
    int preorder[]={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    struct node * start=createBST(preorder);
    printf(" %d ",start->data);
    printf(" %d ",start->left->data);
    printf(" %d ",start->right->data);

    return 0;
}