//print even and odd number in between a gap


#include<stdio.h>
int is_even(int a)
{
	if(a%2==0)
	return 1;
	else return 0;
}
void print_even(int x,int y)
{
	int i;
	int count =0;
	for(i=x;i<=y;i++){
	
	if(is_even(i)){
	
	printf(" %d ",i);
	count++;
}
}
printf("\ntotal even number : %d",count);
for(i=0;i<=count/2;i++)
{
printf(" ");
printf("\n");
}
}
int is_odd(int a)
{
	if(a%2!=0)
	return 1;
	else return 0;
}
void print_odd(int x,int y)
{
	int i;
    int count=0; 
	for(i=x;i<=y;i++)
    {
	if(is_odd(i)){
	printf(" %d ",i);
    count++;
    }
    }
    printf("\ntotal odd number are : %d",count);
}
int main(){
	int i,j,a,b;
	
	printf("enter the range for separaate the even and odd numbers");
	scanf("%d%d",&a,&b);
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	printf(" \n \n \n \n \n \n");
	printf("the even numbers are:\n");
	print_even(a,b);
    printf("the odd numbers are :\n");
	print_odd(a,b);
}
