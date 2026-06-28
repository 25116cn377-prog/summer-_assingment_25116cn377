//fibonacci series

#include <stdio.h>

int main()
{
    int temp,num,a=0,b=1,nextterm;

    printf("ENTER THE NUMBER OF TERM");
    scanf("%d",&num);

    printf("fibonacci series is :");

    for(int i=1;i<=num;i++)
    {
        printf("%d\n",a);
      nextterm = a+b;
      a=temp;
      a=b;
      b=nextterm;

    }
return 0;

}