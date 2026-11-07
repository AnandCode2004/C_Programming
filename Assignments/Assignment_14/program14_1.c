/*
    Write a program which accept number from user and display its FACTORIAL
*/

#include<stdio.h>
#include<stdlib.h>

void displayFactorail(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
     
        printf("*%d" , iCnt);
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
    displayFactorail(iValue);

    return EXIT_SUCCESS;
}