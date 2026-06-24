#include<stdio.h>

int main()
{
 int num,rem;

 
 printf("enter the number");
 scanf("%d",&num);

 int sum = 0;

 while(num!= 0)
 {
 rem = num % 10;

  num = num/10;


sum = sum + rem;
 }

 printf("the sum of digit of %d is %d",num,sum);

 return 0;

}