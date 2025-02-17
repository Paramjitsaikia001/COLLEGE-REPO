#include<stdio.h>
char convert(char x)
{
    return x-32;
}
int main()
{
    char word[200];
    printf("enter a word in lowercase :");
    scanf("%s",word);
    for (int i = 0; word[i] != '\0'; ++i)
    {
        word[i] = convert(word[i]);
    }

    printf("The converted word: %s", word);
    return 0;
}