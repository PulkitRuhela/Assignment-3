#include<stdio.h>

int main()
{
    int a,b,c,discriminant;

    printf("Enter the coefficients of Quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant= b*b-4*a*c;

    if(discriminant>0)
        printf("\nThe roots of quadratic equation are Real and Distinct.");
    else if(discriminant==0)
        printf("\nThe roots of quadratic equation are Real and Equal.");
    else
        printf("\nThe roots of quadratic equation are Imaginary.");
    
    return 0;
}