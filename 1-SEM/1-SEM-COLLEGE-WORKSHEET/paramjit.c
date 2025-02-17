#include<stdio.h>
 int factorial(int a)
 {
 	// if(a==0)
 	// return 1;
 	// else 
	// return(a*factorial(a-1));
	int i,f=1;
	for(i=a;i!=0;i--)
	f*=i;
	return(f);
  }

  //for prime number
 int isprime(int a){
 		int i;
 	for(i=2;i<=a/2;i++)
 	if(a%i==0)
 	return(0);
 	return(1);
 }
 
 //print prime number
 void printprime(int a,int b){
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	int i;
	printf("\nthe prime are");
	for(i=a;i<=b;i++){
		if(isprime(i))
		printf(" %d ",i);
	}
 }
   //for armstrongs number
 int isamongs(int a){
 	int n=a,sum=0,deno;
 	while(n!=0){
 		deno=n%10;
 		sum=sum+deno*deno*deno;
 		n/=10;
 		
	 }
	 if(sum==a)
	 return (1);
	 else
	 return (0);
 }

//print armstrong number
void printarms(int a,int b){
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	int i;
	printf("the armstrongs number");
	for(i=a;i<=b;i++){
		if(isamongs(i))
		printf(" %d ",i);

	}
}
 //for largest of three number
 int largest(int x,int y)
 {
	if(x>y)
	return x;
	else
	return y;

 }

 //for perfect number
 int perfect(int a){
	int i,div,sum=0;
	for(i=1;i<=a/2;i++)
	{
		div=a%i;
		if(div==0)
		sum+=i;
	}
	if(sum==a)
	return(1);
	else
	return(0);
 }
	//print perfect number
	void printperfect(int a,int b){
		if(a>b){
		int t=a;
		a=b;
		b=t;
	}
		int j;
		printf("\nthe perfect number:");
		for(j=a;j<=b;j++){
			if(perfect(j))
			printf(" %d ",j);
		}
	}

 //for print factor of a number
 void factor(int a)
 {
	
	int i;
	printf("\nthe factors are:");
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf(" %d ",i);
		}
	}
 }

 //swap two number
 void swap(int *a,int *b){
	int t;
	*a=*a ^ *b;
    *b=*a^*b;
	*a=*a^*b;
}

//check amicable or not
 int amicable(int a, int b){
	int i,j,sum1=0,sum2=0;
	for(i=1;i<=a/2;i++){
		if(a%i==0)
		
			sum1+=i;
		}
		for(j=1;j<=b/2;j++){
		
		if(b%j==0){
			 sum2=sum2+j;
		}
}
	if(sum1==b && sum2==a)
	return 1;
	else 
	return 0;
}

//print fibonacci series
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
    
        return fibonacci(n - 1) + fibonacci(n - 2);
}
}

//print even number of a array
void even(int a[],int n){
	int i;
	printf("\neven number of a array are");
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf(" %d ",a[i]);
		}
	}
}

//print odd number of a array
void odd(int a[],int n){
	int i;
	printf("\nodd number of a array are");
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf(" %d ",a[i]);
		}
	}
}


void sumproduct(int *a,int *b)
{
	int sum=0;
	sum=*a + *b;
	printf("\nthe sum is =%d ",sum);
	int multi=0;
	multi=*a * (*b);
	printf("\nthe product is=%d \n",multi);	
}

//print the smallest and largest number of an array
 void smalllargest(int a[],int n){
	int i,min,max;
	for(min=max=a[0],i=1;i<n;i++){
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("min=%d\nmax=%d",min,max);
	return;
}

 int main(){
	
 	int  i,a,f,l;
	printf("NOTE: enter i=1 for find factorial of a number\n");
	printf("      enter i=2 for check prime number or not\n");
	printf("      enter i=3 for check armstrong number or not\n");
	printf("      enter i=4 for find largest of three number\n");
	printf("      enter i=5 for check perfect nummber or not\n");
	printf("      enter i=6 for print prime number\n");
	printf("      enter i=7 for print factor of a number\n");
	printf("      enter i=8 for print armstrong number\n");
	printf("      enter i=9 for print perfect number\n");
	printf("      enter i=10 for swap two number\n");
	printf("      enter i=11 for check amicable  number or not\n");
	printf("      enter i=12 for print fibonacci series by recursive in a given range\n");
	printf("      enter i=13 for print even numner of array[]={1,2,3,4,5,6,7,8,9 }\n");
	printf("      enter i=14 for print odd numner of array[]={1,2,3,4,5,6,7,8,9 }\n");
	printf("      enter i=15 for print sum and product of two number\n");
	printf("      enter i=16 for find gcd of two number\n");
	printf("      enter i=17 for print smallest and largest number of an array[]={4,5,7,1,2,9,0}\n\n\n");
	printf("enter the value of i=");
	scanf("%d",&i);
	switch (i){

case 1:
 	printf("enter a to find factorial....");
 	scanf("%d",&a);
 	f=factorial( a);
 	printf("%d is the factorial of %d\n\n",f,a);
    break;
case 2:
	//for prime number
	int p;
	printf("enter p for check it prime or not...");
	scanf("%d",&p);
 	if (isprime(p)) {
        printf("%d is a prime number.\n\n", p);
    } else {
        printf("%d is not a prime number.\n\n", p);
    }
	break;
case 3:
	//for armstrongs number
	int m;
	printf("enter m for check armstrong or not..");
	scanf("%d",&m);
 	if(isamongs(m)){
 	 printf("%d is an Armstrong number.\n\n", m);
    } else {
        printf("%d is not an Armstrong number.\n\n", m);
    }
     break;
case 4:
	//for largest of three number	
	int b,c,d;
	printf("enter three  number for find the largest:");
	printf("\nfirst number=");
	scanf("%d",&b);
	printf("\nsecond number=");
	scanf("%d",&c);
	printf("\nthird number=");
	scanf("%d",&d);
     int l=largest(largest(b,c),d);
	 printf("%d is the largest number of %d,%dand%d\n\n",l,b,c,d);
 break;
 case 5:
	 //for perfect number
	 int x;
	 printf("enter x for check perfect  number or not=");
	 scanf("%d",&x);
	 if(perfect(x))
      printf("%d is the perfect no\n",x);
     else
     printf("%d is not perfect no\n\n",x);
	 break;
case 6:
	 //print prime number
	 int start , end;
	 printf("enter the first number for print prime number");
	 scanf("%d",&start);
	 printf("enter the last number for print prime number");
	 scanf("%d",&end);
	 printprime(start,end);
	 break;
case 7:
	 //print factor a  number
	 int num;
	 printf("\n\nenter a  number for find factor...");
	 scanf("%d",&num);
	 factor(num);
	 break;
case 8:
	 //print armstong
	int from,to;
	printf("\n\narmstrong number from=");
	scanf("%d",&from);
	printf("to=");
	scanf("%d",&to);
     printarms(from,to);
break;
case 9:
	 //print perfect number
	 int first,last;
	 printf("\n\nfirst no for print perfect number=");
	 scanf("%d",&first);
	 printf("last no for print perfect number=");
	 scanf("%d",&last);
	 printperfect(first,last);
	  break;

	  //swap two number
 case 10:
	  int num1,num2;
	printf("first number=");
	scanf("%d",&num1);
    printf("second number=");
	scanf("%d",&num2);
	swap(&num1,&num2);
	printf("after swap : first number=%d second number=%d",num1,num2);
	break;

	//check amicable or not
case 11:
	int NUM1,NUM2;
	printf("NUM1=");
	scanf("%d",&NUM1);
	printf("NUM2=");
	scanf("%d",&NUM2);
	if(amicable(NUM1,NUM2))
	printf("%d and %d are amicable number\n",NUM1,NUM2);
	else
	printf("%d and %d are  not amicable number\n",NUM1,NUM2);
	break;

case 12:

	//print fibonacci series
	int n;
	printf("enter number of terms");
	scanf("%d",&n);
	printf("the fibonacci series is :");
	for(int i=0;i<=n;i++)
	printf(" %d ", fibonacci(i) );
	break;

//print even number of a array
case 13:

		int ar[]={1,2,3,4,5,6,7,8,9};
	int s=9;
	even(ar,s);
	break;


//print odd number of a array
case 14:

		int arr[]={1,2,3,4,5,6,7,8,9};
	int si=9;
	odd(arr,si);
	break;

	//print sum and product of two  number
case 15:
	int A,B;
	printf("enter first number=");
	scanf("%d",&A);
	printf("enter second number=");
	scanf("%d",&B);
	sumproduct(&A,&B);
	break;

case 16:
	//print gcd of two number
		int e,f,k;
	printf("enter two number");
	scanf("%d\n%d",&e,&f);
	if(e>f){
		int t=e;
		e=f;
		f=t;
	}
	for(k=f;k>=1;k--){
		if(e%k==0 && f%k==0){
			printf("gcd = %d",k);
			break;
		}
	}
	break;

	//print smallest and largest number of an array
case 17:
		int sl[]={4,5,7,1,2,9,0};
	int N=7;
	smalllargest(sl,N);
	break;
}
}

 

 
