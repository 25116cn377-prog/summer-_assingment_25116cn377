#include<stdio.h>

int main()
{
    int num;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);

    int sum = 0;

    for(int i = 1;i <= num;i++)
{
    sum = sum + i;

}

printf("THE SUM IS %d ",sum);

return 0;
}