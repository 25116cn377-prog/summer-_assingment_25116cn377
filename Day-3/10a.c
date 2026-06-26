//TO PRINT PRIME NUMBER IN A RANGE

#include<stdio.h>

int main()
{
    int snum,c,lnum,ream;

    printf("enter smaller number");
    scanf("%d",&snum);

    printf("enter larger number");
    scanf("%d",&lnum);

   c = snum;

   

   while(c<=lnum)
   {

    int count = 0;

    for(int i = 1;i<=c;i++)
    {
        ream = c%i;

        if(ream == 0)
        {
        count++;
        }
        
    }

    if(count == 2)
        {
            printf("prime number is %d\n",c);
        }

    c++;
   }
   return 0;

   }