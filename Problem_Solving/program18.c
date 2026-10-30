#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
        if ((iNo % 2 )== 0)
        {
            printf("Even Number\n");
        }
        else
        {
            printf("Odd Number\n");
        }
}

int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);

    CheckEven(iValue);
    
   
    return EXIT_SUCCESS;
}