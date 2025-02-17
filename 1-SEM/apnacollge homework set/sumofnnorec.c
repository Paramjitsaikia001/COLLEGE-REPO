#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    else
    return sum(n-1)+n;
}
int main()
{
    int n=6;
    printf("%d",sum(n));
}