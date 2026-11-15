/*
    ------------------------------------
                Operation ||
    ------------------------------------
    Result1     Result2     Final Result
    ------------------------------------
     TRUE        TRUE           TRUE   Short Circuit
     TRUE        FALSE          TRUE   Short Circuit
     FALSE       TRUE           TRUE   
     FALSE       FALSE          FALSE    
    ------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3 == 0) || (iNo % 5 == 0))
    {
        printf("it is divisible\n");
    }
    else
    {
        printf("it is not dibisible\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);


    return EXIT_SUCCESS;
}