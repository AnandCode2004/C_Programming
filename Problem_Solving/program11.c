#include<stdio.h>
#include<stdlib.h>

int main()
{
     int iRet = 0;
     int iNo = 0;
     printf("Enter a Number: \n");
     if (scanf("%d", &iNo) != 1)
    {
        printf("Invalid input");
        return EXIT_FAILURE;
    }
    else
    {
        printf("Valid input");
    }


   

    return EXIT_SUCCESS;
}