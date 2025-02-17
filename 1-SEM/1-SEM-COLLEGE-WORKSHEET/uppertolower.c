#include<stdio.h>
int main()
{
    int valid;
    char word[200];
    printf("enter a word in uppercase: ");
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]<='A'|| word[i]>='Z')
        {
            printf("it is not uppercase word");
            break;
        }
        else
        word[i]=word[i]+32;
    }
    printf("%s",word);
    return 0;
}