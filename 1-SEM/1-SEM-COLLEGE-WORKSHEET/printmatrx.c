#include<stdio.h>
int main()
{
    int i,j;
    printf("enter the order of the matrix:");
    scanf("%d%d",&i,&j);
    int arr[i][j];
    printf("enter the element of the matrix:");
    for(int r=0;r<i;r++)
    {
        for(int c=0;c<j;c++)
        {
            scanf("%d",&arr[r][c]);
        }

    }
    for(int r=0;r<i;r++)
    {
        for(int c=0;c<j;c++)
        {
            printf(" %d ",arr[r][c]);
            
        }
        printf("\n");
    }
}