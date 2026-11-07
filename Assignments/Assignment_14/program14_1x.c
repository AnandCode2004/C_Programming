/*
    Write a program which accept number from user and calculates its FACTORIAL
*/

#include<stdio.h>
#include<stdlib.h>

int displayFactorail(int iNo)
{
    int iCnt = 0;

    int iFactorail = 1;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFactorail = iFactorail * iCnt;
    }

    return iFactorail;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : \n");
    if((scanf("%d" , &iValue) != 1))
    {
        printf("Invalid input.\n");
    }

    iRet = displayFactorail(iValue);
    printf("%d\n" , iRet);


    return EXIT_SUCCESS;
}