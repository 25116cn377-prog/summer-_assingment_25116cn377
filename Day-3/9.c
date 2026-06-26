//CHECK NUMBER IS PRIME OR NOT

#include <stdio.h>

int main()
{
    int num,ream;

    printf("ENTER THE NUMBER");
    scanf("%d",&num);

    int c = num;

    int count = 0;

    int i = 1;

    while(i<=c)
    {
        ream = c%i;

        if(ream == 0)
        {
            count++;
        }

        i++;
    }

    if (count == 2)
    {
        printf("NUMBER IS PRIME");
    }

    else
    {
        printf("NUMBER IS NOT PRIME");
    }

    return 0;
}