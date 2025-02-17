#include<stdio.h>
int main(){
    int x=9;
    int *ptr=&x;
    int y=4;
    int *_ptr=&y;
    if(ptr<_ptr){
        printf("ptr is bigger");
    }
    else if(ptr>_ptr){
        printf("_ptr is bigger");
    }
    else{
        printf("ptr=_ptr");
    }
    return 0;
}