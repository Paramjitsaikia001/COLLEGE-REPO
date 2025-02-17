#include<stdio.h>
int main()
{
    int sent[200];
    printf("enter the sentence:");
    scanf("%s",sent);
    int i;
    int count;
    for(i=0;;i++)
    {
        if(sent[i]=='\0')
        count++;
    }
    printf("%s",count);

}