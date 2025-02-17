/*Write a program in which a function is passed address of two variables and then alter 
its contents. */

#include<stdio.h>
void alter(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int A,B;
    printf("A = ");
    scanf("%d",&A);
    printf("B = ");
    scanf("%d",&B);
    alter(&A,&B);
    printf("A=%d B=%d",A,B);
    return 0;

}