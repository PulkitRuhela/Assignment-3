#include<stdio.h>

int main()
{
    int n,m;

    printf("Enter two numbers: ");
    scanf("%d %d",&n, &m);

    if(n>m){
        printf("\nFirst number is greater.");
        }
    else if (m>n)
    {
        printf("\nSeconf is greater.");

    }
    else{
        printf("\nThe number is %d", n);
    }
    return 0;
}