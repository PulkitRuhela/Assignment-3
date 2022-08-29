#include<stdio.h>

int main()
{
    int CP, SP;
    float Pper, Lper;

    printf("Enter the Cost Price of the product: ");
    scanf("%d", &CP);

    printf("Enter the Selling Price of the product: ");
    scanf("%d", &SP);
    if(SP>CP)
    {
        Pper=((SP-CP)*100)/CP;
        printf("\nProfit percentage of product is: %f%%",Pper);
    }
    else if(CP>SP)
    {
        Lper=((CP-SP)*100)/CP;
        printf("\nLoss percentage of product is: %f%%",Lper);
    }
    else
    {
        printf("\nThere is neither profit nor loss.");
    }


    return 0;
}