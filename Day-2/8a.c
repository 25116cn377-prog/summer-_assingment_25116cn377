#include<stdio.h>

int main()
{
    int num,ream;

    printf("Enter the number");
    scanf("%d",&num);

    int rev = 0;

    if()
    {
        rev==num;
        printf("number is palindrome");
    }
    else{
        printf("number is not a palindrome");
    }

    while(num!=0)
    {

        ream = num % 10;
        rev = rev*10+ream;
        num = num/10;
    }

    printf("reverese of number is %d",rev);

    

    return 0;
}