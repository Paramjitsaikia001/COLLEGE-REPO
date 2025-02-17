// write a function named slice ,which takes a string & returns a sliced string from index n and m

#include<stdio.h>
void slice(char str[],int n,int m){
    for(int i=n;i<=m;i++){
        printf("%c",str[i]);
    }
}
int main(){
    char str[50];
    // printf("enter the string: ");
    fgets(str,50,stdin);
    // scanf("%s",str);
    int n,m;
    printf("enter the range for the slice: ");
    scanf("%d %d", &n ,&m);
    printf(" the result is: ");
    slice(str,n,m);
    
}