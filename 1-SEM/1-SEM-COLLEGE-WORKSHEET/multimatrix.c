#include<stdio.h>
int main()
{
    int r1,r2,c1,c2;
    printf("enter the order of 1st matrix:");
    scanf("%d%d",&r1,&c1);
    int mat1[r1][c1];
    printf("enter the element of 1st matrix:");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter the order of 2nd matrix:");
    scanf("%d%d",&r2,&c2);
    int mat2[r2][c2];
    printf("enter the element of 2nd matrix:");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("the 1st matrix is\n");
     for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf(" %d ",mat1[i][j]);
        }
        printf("\n");
    }
     printf("the 2nd matrix is\n");
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf(" %d ",mat2[i][j]);
        }
        printf("\n");
    }
    if(c1!=r2)
    {
        printf("cannot multiply");
        return 1;
    }
    
    
    
      int multi[r1][c2];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            multi[i][j] = 0;  // Initialize the element to 0 before performing multiplication
            for (int k = 0; k < c1; k++) {
                multi[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("multiplication matrix is:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf(" %d ",multi[i][j]);
        }
        printf("\n");
    }
    return 0;

}