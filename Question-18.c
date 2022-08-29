#include<stdio.h>

int main()
{
    int m;

    printf("Enter the month number between 1 and 12: ");
    scanf("%d",&m);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
       printf("\nThere are 31 days in the %d numbered month.",m);
    else if(m==4 || m==6 || m==9 || m==11)
       printf("\nThere are 30 days in the %d numbered month.",m);
    else if(m==2)
       printf("\nThere are either 28 days or 29 days in the %d numbered month.",m);
    else
       printf("\nIt is not a valid month.");

    return 0;
}