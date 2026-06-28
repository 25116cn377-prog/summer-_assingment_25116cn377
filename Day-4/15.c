//ARMSTRONG NUMBER

#include<stdio.h>
#include<math.h>

int main()
{
    int num,ream,ream1,sum=0;

    printf("enter the number");
    scanf("%d",&num);

    int count = 0;

    int c = num;
    int d = num;

    while(num>0)
{
 ream = num % 10;

    count++;

num = num /10;

}

while(c>0)
{
    ream1 = c % 10;
    sum = sum + (int)(pow(ream1,count)+0.5);
    c = c/10;
}

if(sum==d)
    {
    printf("number is armstrong"); 
    }
    else
    {
        printf("number is not an armstrong");
    }

    
    return 0;

}