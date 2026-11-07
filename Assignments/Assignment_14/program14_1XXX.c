/*
    Write a program which accept number from user and display its multiplication of factors
*/
#include<stdio.h>
#include<stdlib.h>

int MultFactors(int iNo)
{
    int iCnt = 0;
    int iFactors = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)  /* T.C = O(N/2)*/
    {
        if((iCnt % iNo) == 0)  // incorrect implimentation i use iCnt % iNo instead  iNo % iCnt
        {
            iFactors = iFactors * iCnt;
        }

    }
    return iFactors;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : \n");
    if(scanf("%d" , &iValue) != 1)
    {
        printf("Invalid input.\n");
        return EXIT_FAILURE;
    }

    iRet = MultFactors(iValue);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}