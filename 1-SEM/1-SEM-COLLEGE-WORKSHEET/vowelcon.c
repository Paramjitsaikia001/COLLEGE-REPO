#include<stdio.h>
int vowel(char n)
{
 if(n=='a'|| n=='e'||n=='i'||n=='o'||n=='u'||n=='A'|| n=='E'||n=='I'||n=='O'||n=='U')
 return 1;
 else 
 return 0;
}
int consonant(char n)
{
 if(n=='a'|| n=='e'||n=='i'||n=='o'||n=='u'||n=='A'|| n=='E'||n=='I'||n=='O'||n=='U')
 return 0;
 else 
 return 1;
}

int main()
{
    char word[200];
    printf("enter the word:");
    scanf("%s",word);
    int n=0;
     while(word[n]!='\0')
    {
        n++;
    }

    int i;
    printf("vowels are:");
    for(i=0;i<n;i++)
    {
    if(vowel(word[i]))
    printf(" %c ",word[i]);
    }
    printf("consonants are:");
    for(i=0;i<n;i++)
    {
    if(consonant(word[i]))
    printf(" %c ",word[i]);
    }

    return 0;

 
}