#include<stdio.h>

int main()
{
    int num,div;

    printf("ENTER THE NUMBER");
    scanf("%d",num);

    int count=0;

    //three cases possible 1.enter number should be zero,number is negattive,number is positive.

    //if number is zero
    if(num == 0)
    {
        count = 1;
    }
    else
    if (num<0)
    {
        num = -num;
    }
   
    while(num!=0)
    {
        num = num/10;
        count++;
    }

    printf("the number is digit in %d is %d",num,count);

    return 0;

    
}