// implementation of stack using array

#include <stdio.h>
#define MAX_SIZE 20
int stack[MAX_SIZE];
int pop = -1;

//isempty
int isempty(){
   return pop == -1;
}

//isfull
int isfull(){
   return pop ==MAX_SIZE;
}

//push the element in the top of the stack
void push(int item)
{
   if (isfull()){
      printf("stack is overflow");
      return;
   }
   else
   stack[++pop]=item;
   printf(" %d ",stack[pop]);
}

//pop a element from the top of the stack
void POP()
{
   if (isempty()){
      printf("stack is underflow");
      return;
   }
   while(pop!=-1){
      printf("%d is pop \n",stack[pop]);
      pop--;
   }
}
int main()
{

push(2);

push(3);

push(4);
printf("\n");
POP();
if(isempty()){
   printf("the stack is empty now!");
}
return 0;
}