#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double discriminant,root1,root2;
    printf("enter the coefficint (a,b,c) of the quadratic equation :");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)//roots are real and different
    {
      root1=(-b+sqrt(discriminant))/(2*a);
      root2=(-b-sqrt(discriminant))/(2*a);
      printf("the roots are : %.2lf and %.2lf",root1,root2);
    }
    else if(discriminant==0)//roots are real and identical
    {
      root1=root2=-b/(2*a);
      printf("the roots are : %.2lf",root1);
    }
    else{//roots are complex and conjugate
       double realpart=-b/(2*a);
       double imgpart=sqrt(-discriminant)/(2*a);
       printf("the roots are : %.2lf +%.2lfi and %.2lf-%.2lfi ",realpart,imgpart,realpart,imgpart);
    }
  return 1;
}