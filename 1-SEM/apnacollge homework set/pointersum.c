#include<stdio.h>
int main(){
    int x=4;
    int *ptr=&x;
    printf("ptr= %d",ptr);
    ptr++;
    printf("ptr++= %d",ptr);
}