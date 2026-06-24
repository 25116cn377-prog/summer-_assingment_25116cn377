#include<stdio.h>

int main()
{
int num,ream;

    printf("ENTER THE NUMBER");
    scanf("%d",&num);

    while(num != 0)
    {
        ream = num % 10;
      
 printf("%d",ream);

  num = num /10;
        
    }
    return 0;
}

   