// merging the double linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *LEFT;
    struct node *RIGHT;
};

// creation
void Insert(struct node **START)
{
    int value;
    printf("Enter the value where you want to insert :");
    scanf("%d", &value);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("memory allocation failed.\n");
        return;
    }
    if (*START == NULL)
    {
        newnode->data = value;
        *START = newnode;
        newnode->LEFT = *START;
        newnode->RIGHT = NULL;
    }
    struct node *temp = *START;
    while (temp->RIGHT != NULL)
    {
        temp = temp->RIGHT;
    }
    newnode->data = value;
    temp->RIGHT = newnode;
    newnode->LEFT = temp;
    newnode->RIGHT = NULL;
}

// merging
struct node * merge(struct node **FIRST, struct node **SECOND)
{

    if (*FIRST == NULL)
    {
        return *SECOND;
    }
    else
    {
        struct node *temp = *FIRST;
        while (temp->RIGHT != NULL)
        {
            temp = temp->RIGHT;
        }
        printf("%d", temp->data);
        temp->RIGHT = *SECOND;
        return *FIRST;
    }
}

// print
void print(struct node *start)
{
    struct node *temp = start;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->RIGHT;
    }
    printf("\n");
}

int main()
{
    struct node *one = NULL;
    struct node *two = NULL;

    int n1;
    printf("how many element you want:");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        Insert(&one);
    }
    printf("first linked list :");
    print(one);

    int n2;
    printf("how many element you want:");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        Insert(&two);
    }
    printf("second linked list :");
    print(two);

    struct node * mergeLL=merge(&one, &two);
    print(mergeLL);

    return 0;
}