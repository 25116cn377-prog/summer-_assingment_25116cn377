#include<stdio.h>

int main()
{
    int num,ream;

    printf("enter the number\n");
    scanf("%d",&num);

    int count = 0;

     for(int i = 1;i <= num;i++)
     {
        ream = num % i;
        if(ream == 0)
        count++;
     }
     printf("%d\n",count);

     if(count == 2)
     {
      printf("NUMBER IS PRIME\n");
     }
     else{
      printf("number is not a prime\n");
     }
     return 0;
}