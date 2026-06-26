#include<stdio.h>

int main()
{
    int snum,lnum;

    printf("enter smaller number");
    scanf("%d",&snum);

    printf("enter larger number");
    scanf("%d",&lnum);

    for(int i = snum;i<=lnum;i++)
    {
        printf("%d\n",i);
    }

    return 0;

}