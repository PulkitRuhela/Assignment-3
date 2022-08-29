#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n>99 && n<1000)
        printf("\nThe number is a 3-digit number.");
    else
        printf("\nThe number is not a 3-digit number.");

    return 0;
}