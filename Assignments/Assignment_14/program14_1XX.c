/*
    Write a program which accept number from user and Display its FACTORS
*/

#include<stdio.h>
#include<stdlib.h>

void displayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t" , iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    if((scanf("%d" , &iValue) != 1))
    {
        printf("Invalid input.\n");
    }

    displayFactors(iValue);
  


    return EXIT_SUCCESS;
}