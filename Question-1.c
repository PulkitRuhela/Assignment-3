#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>0)
        printf("\nThe entered number is Positive");
    else
        printf("The entered number is Non-Positive");

    return 0;
}