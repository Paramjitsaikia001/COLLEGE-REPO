	//Enter a number and check whethe! it is fihonacci number or not.
#include<stdio.h>
int main()
{
	int n;
	int a=0,b=1,c=0;
	printf("enter the number ");
	scanf("%d",&n);
	while(c<n){
		c=a+b;
		a=b;
		b=c;
	}
	if(c==n)
	printf("fibonacci");
	else
	printf("not fibonacci");
	return 0;
}
