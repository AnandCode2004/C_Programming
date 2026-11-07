/*
    Write a program which accept number from user and return difference between summation of all its factors and non factors
*/

#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }

    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }

    }
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : \n");
    if((scanf("%d" , &iValue) != 1))
    {
        printf("Invalid input.\n");
    }

    iRet = FactDiff(iValue);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}