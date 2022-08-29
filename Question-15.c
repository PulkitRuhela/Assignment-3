#include<stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d",&x);

    if(x>0)
    {
        printf("\nEntered number %d is Positive.",x);
    }
    else if(x==0)
    {
        printf("\nEntered number %d is zero.",x);
    }
    else if(x<0)
    {
        printf("\nEntered number %d is Negative.",x);
    }
    else
    {
        printf("\nThis is not a number.");
    }

    return 0;
}