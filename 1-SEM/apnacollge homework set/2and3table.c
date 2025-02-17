// #include<stdio.h>
// int main(){
//     int arr[2][10];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<10;j++){
//              arr[i][j]=(i+2)*(j+1);
//              printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
void storeTable(int arr[][10],int n,int m,int number){//we must be put the value of 2nd dimension of the array 
//here n is the number of row and m is the number of column
    for(int i=0;i<m;i++){
        arr[n][i]=number*(i+1);
    }
}

int main(){
    int table[2][10];
    storeTable(table,0,10,2);
    storeTable(table,1,10,3);

    for(int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    }

    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
    }
    printf("\n");

    return 0;
}