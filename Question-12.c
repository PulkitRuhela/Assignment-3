#include<stdio.h>

int main()
{
    char a;

    printf("Enter an alphabet: ");
    scanf("%c",&a);

    if(a>='A' && a<='Z')
    {
        printf("\nEntered alphabet \'%c\' is in uppercase.",a);

    }
    else if(a>='a' && a<='z')
    {
        printf("\nEntered alphabet \'%c\' is in lowercase.",a);
    
    }
    else
    {
        printf("\nEntered alphabet is not an alphabet.");
    }


    return 0;
}