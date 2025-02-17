#include<stdio.h>
int main(){
    int n=5;
    int *ptr=&n;
    int **pptr=&ptr;
    printf("*ptr= %d\n",*ptr);
    printf("**pptr= %d",**pptr);   
    return 0;
}