#include<stdlib.h>
#include<stdio.h>

void CheckDivisible(int iNo)
{
    if(iNo % 3  == 0)
    {
        printf("it is Divisible\n");
    }
    else
    {
        printf("it is not divisble\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}