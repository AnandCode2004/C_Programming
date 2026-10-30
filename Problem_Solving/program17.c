#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d\n", &iValue);

    if ((iValue % 2 )== 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    return EXIT_SUCCESS;
}