#include<stdio.h>

int main()
{
    int num,factorial;
    printf("ENTER THE NUMBER");
    scanf("%d",&num);

    factorial = 1;

    for(int i = 1;i<=num;i++)
    {
        factorial = i*factorial;
    }
    printf("FACTORIAL OF THE NUMBER IS %d",factorial);

    return 0;
}