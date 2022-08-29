#include<stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d",&x);

    if(x%7==0 || x%3==0)
    {
        if(x%7==0)
        printf("\nEntered number %d is either divisible by 7 or divisible by 3.", x);
    }
    else
    {
        printf("\nEntered number is %d neither divisible by 7 nor  divisible by 3.", x);
    }

    return 0;
}