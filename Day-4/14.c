//fibonacci series

#include <stdio.h>

int main()
{
    int temp,num,a=0,b=1,nextterm,n;

    printf("ENTER THE NUMBER OF TERM");
    scanf("%d",&num);

    printf("term to be find");
    scanf("%d",&n);

    printf("fibonacci series is :");

    for(int i=0;i<=num;i++)
    {
        printf("%d\n",a);
      nextterm = a+b;
      a=temp;
      a=b;
      b=nextterm;

      if(i==n)
      {
        printf("th enumber is %d",a);
      }


     
    }

     
return 0;

}