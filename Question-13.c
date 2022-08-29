#include<stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d",&x);

    if(x%3==0 && x%2==0)
    {
        printf("\nEntered number is divisible by 3 and 2.");
    }
    else
    {
        printf("\nEntered number is not divisible by 3 and 2.");
    }

    return 0;
}