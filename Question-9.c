#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    if(a>b && a>c)
        printf("\nFirst number is greatest.");
    else if (b>a && b>c)
    {
        printf("\nSecond is greatest.");
    
    }
    else if(c>a && c>b)
    {
        printf("\nThird is greatest.");
    }    
    else if(a==b || a==c){
        if(a>c)
           printf("\nThe greatest number is %d", a);
        else 
            printf("\nThe greatest number is %d", c);
    }
    
    return 0;
}