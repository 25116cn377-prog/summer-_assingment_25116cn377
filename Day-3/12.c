//TO FIND LCM OF A TWO NUMBER

#include<stdio.h>

int main()
{
    int snum,lnum,lcm;

    printf("ENTER THE SMALLER NUMBER");
    scanf("%d",&snum);

        printf("ENTER THE larger NUMBER");

    scanf("%d",&lnum);

    for(int i = lnum; ;i+=lnum)
    {
        if(i%snum == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("lcm of number is %d",lcm);

    return 0;
}