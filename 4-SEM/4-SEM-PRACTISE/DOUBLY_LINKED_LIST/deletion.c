// deletion in doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *LEFT;
    struct node *RIGHT;
};

int isempty(struct node *str)
{
    return str == NULL;
}

// linked list
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
        return;
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

// deletion function
void deletion(struct node **START)
{
    int value;
    printf("enter the value you want to delete:");
    scanf("%d", &value);

    if (*START == NULL)
    {
        printf("Double linked list already empty .\n");
        return;
    }
    struct node *temp = *START;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            if (temp->RIGHT == NULL)
            {
                temp->LEFT->RIGHT = NULL;
                free(temp);
                return;
            }
            else if (temp == *START)
            {
                *START = temp->RIGHT;
                free(temp);
                return;
            }else
            {
                temp->LEFT->RIGHT = temp->RIGHT;
                temp->RIGHT->LEFT = temp->LEFT; 
                free(temp);
                return;
            }

        }
        temp = temp->RIGHT;
    }
    printf("%d is not in Doubly linked list.\n", value);
}

    // print
    void print(struct node * start)
    {
        struct node *temp = start;
        if (isempty(start))
        {
            printf("EMPTY🪹\n");
            return;
        }
        while (temp != NULL)
        {

            printf(" %d ", temp->data);
            temp = temp->RIGHT;
        }
        printf("\n");
    }

    int main()
    {
        struct node *Doubly = NULL;

        int n;
        printf("how many element you want:");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            Insert(&Doubly);
        }
        print(Doubly);

        deletion(&Doubly);
        print(Doubly);

        return 0;
    }