#include<stdio.h>

int main()
{
    int n=0;
    char word[200];
    printf("enter a word:");
    scanf("%s",word);

    while(word[n]!='\0')
    {
        n++;
    }

    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        char t =word[i];
        word[i]=word[j];
        word[j]=t;
    }
    printf("reverse word is: %s",word);
    return 0;

}