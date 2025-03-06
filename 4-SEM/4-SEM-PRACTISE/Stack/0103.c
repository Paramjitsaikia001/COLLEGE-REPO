// stack implementation using struct

#include <stdio.h>
#include <stdlib.h>
struct STACK
{
   int data;
   struct STACK *next;
};

// push element in the stack
void push(struct STACK **node, int item)
{
   struct STACK *newnode, *temp;
   newnode = (struct STACK *)malloc(sizeof(struct STACK));
   if (newnode == NULL)
   {
      printf("memory allocation failed \n");
      return;
   }

   if (*node == NULL)
   {
      *node = newnode;
   }
   else
   {
      temp = *node;
      while (temp->next != NULL)
      {
         temp = temp->next;
      }
      temp->next = newnode;
   }
   newnode->data = item;
   newnode->next = NULL;
   printf("%d is push into the stack\n",item);
}

// pop
void pop(struct STACK **node)
{
   struct STACK *temp;
   if (*node == NULL)
   {
      printf("\nthe stack is empty");
      return;
   }
      temp = *node;
      printf("%d is poped \n", temp->data);
      *node = (*node)->next;
      free(temp);    
}

// print all elements in the stack
void printStack(struct STACK *node) {
   while (node != NULL) {
      printf("%d ", node->data);
      node = node->next;
   }
   printf("\n");
}
int main()
{
   struct STACK *start = NULL;
   for (int i = 0; i < 10; i++)
   {
      push(&start, i);
   }
   printStack(start);

   while(start!=NULL){
      pop(&start);
   }
   printStack(start);
}