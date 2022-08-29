#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n&1==1)
        printf("\nIt is an odd number");
    else
        printf("\nIt is an even Number");    
    return 0;
}