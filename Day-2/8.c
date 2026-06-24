#include<stdio.h>

int main()
{
    int num,c,ream;

    printf("Enter the number");
    scanf("%d",&num);

    int rev = 0;
    c = num;

    while(num>0)
    {

        ream = num % 10;
        rev = rev*10+ream;
        num = num/10;
    }

    printf("reverese of number is %d\n",rev);

    if(c==rev)
    {
        printf("number is palindrome");
    }
    else{
        printf("number is not a palindrome");
    }

    return 0;
}