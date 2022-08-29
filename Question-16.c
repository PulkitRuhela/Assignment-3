#include<stdio.h>

int main()
{
    char a;

    printf("Enter a Character: ");
    scanf("%c",&a);

    if(a>='A' && a<='Z')
    printf("\nIt is an alphabet in uppercase.");
    else if(a>='a' && a<='z')
    printf("\nIt is an alphabet in lowercase.");
    else if(a>=0 && a<=9)
    printf("\nIt is a digit.");
    else
    printf("\nIt is a special character.");

    return 0;
}