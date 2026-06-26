//TO FIND GCD OF A TWO NUMBER

#include <stdio.h>

int main()
{
    int snum,lnum,gcd,c;

    printf("ENTER THE SMALLER NUMBER");
    scanf("%d",&snum);

        printf("ENTER THE LARGER NUMBER");
    scanf("%d",&lnum);

    c = snum;

    for(int i = 1;i<=snum;i++)
    {
        if(c % i == 0 && lnum % i == 0 )
        {
            gcd = i;
        }
    }

    printf("the greatest common factor of numbers are %d",gcd);

    return 0;

}