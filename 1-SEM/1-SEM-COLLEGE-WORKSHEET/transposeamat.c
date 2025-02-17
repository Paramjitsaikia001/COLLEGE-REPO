#include<stdio.h>
int main()
{
    int r,c;
    printf("enter the order of the matrix:");
    scanf("%d%d",&r,&c);
    int mat[r][c];

    printf("enter the element of the matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("the matrix is:\n");
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("transpose of  matrix:\n");
      for (int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
      
        {
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}