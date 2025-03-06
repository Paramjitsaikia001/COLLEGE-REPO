// single linked list implementation

#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
};

// add element at the begining
void add_at_begin(struct node **start, int item)
{
   struct node *newnode;
   newnode = (struct node *)malloc(sizeof(struct node));
   if (newnode == NULL)
   {
      printf("Memory allocation failed .\n");
      return;
   }
   newnode->data = item;
   newnode->next = *start;
   *start = newnode;
}

// add element at the end
void add_at_end(struct node **start, int item)
{
   struct node *newnode, *temp;
   newnode = (struct node *)malloc(sizeof(struct node));
   if (newnode == NULL)
   {
      printf("Memory allocation failed .\n");
      return;
   }
   if ((*start) == NULL)
   {
      newnode->data = item;
      newnode->next = *start;
      *start = newnode;
   }
   else
   {
      temp = *start;
      while (temp->next != NULL)
      {
         temp = temp->next;
      }
      newnode->data = item;
      temp->next = newnode;
      newnode->next = NULL;
   }
}

// remove first element
void rm_front(struct node **start)
{
   struct node *temp = *start;
   if ((*start) == NULL)
   {
      printf("\n the linked list is empty!\n");
      return;
   }
   *start = (*start)->next;
   free(temp);
}

// remove last element
void rm_last(struct node **start)
{
   if (*start == NULL)
   {
      printf("\nlinked list is empty\n");
   }
   struct node *temp = *start;
   while (temp->next->next != NULL)
   {
      temp = temp->next;
   }
   temp->next = NULL;
   free(temp->next);
}

// print the linked list
void printLL(struct node *start)
{
   struct node *result = start;
   while (result != NULL)
   {
      printf("%d -> ", result->data);
      result = result->next;
   }
   printf("NULL\n");
}
int main()
{
   struct node *result = NULL;
   add_at_begin(&result, 3);
   add_at_end(&result, 70);
   add_at_begin(&result, 4);
   add_at_begin(&result, 5);
   add_at_end(&result, 7);
   printf("main linked list : ");
   printLL(result);
   rm_front(&result); // first element delete
   printf("after delete first element, linked list : ");
   printLL(result);
   rm_last(&result); // last element delete
   printf("after delete last element, linked list : ");
   printLL(result);

   return 0;
}