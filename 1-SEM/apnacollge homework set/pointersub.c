#include<stdio.h>
int main(){
    int x=9;
    int *ptr=&x;
    int y=3;
    int *_ptr=&y;
    printf("ptr= %u\n",ptr);
    printf("_ptr= %u\n",_ptr);
    printf("ptr-_ptr = %u",ptr -(_ptr));//pointer can subtract only
}