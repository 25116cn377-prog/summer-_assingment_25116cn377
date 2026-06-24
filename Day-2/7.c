//product of digit
#include<stdio.h>

int main()
{

    int num,rem;
    printf("enter the number");
    scanf("%d",&num);

    int product = 1;

    while(num!=0)
    {

        rem = num % 10;
        num = num/10;
        product = product*rem;
    }

    printf("the product of number is %d",product);

    return 0;
}