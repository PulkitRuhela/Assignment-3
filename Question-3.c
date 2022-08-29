#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n%2==0)
       printf("\nIt is an Even number");
    else
       printf("It is an Odd Number");
   
    return 0;
}