/*
   Write a program to find Factorail of a number
*/
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : Factorail
///     Input            : Integer
///     Output           : Integer
///     Description      : Write a program to find Factorail of a number
///     Date             : 02/10/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorail(int iNo)
{
    iNo = abs(iNo);
    
    int iFact = 1, iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");

    if (scanf("%d" ,&iValue) != 1)
    {
        printf("invalid input\n");
    }

    iRet = Factorail(iValue);
    printf(" Factorial of %d is : %d\n" , iValue, iRet);

    return EXIT_SUCCESS;
}
