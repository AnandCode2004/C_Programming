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
///     Modification     : Formula = n * (n -1)
////////////////////////////////////////////////////////////////////////////////////////////////////


int Factorail(int iNo)
{
    // Handle negative numbers just like your original code
    iNo = abs(iNo);

    // Base Case: 0! or 1! is always 1
    if (iNo <= 1)
    {
        return 1;
    }

    // Recursive Case: Perfectly maps to the iNo * (iNo - 1) logic
    return iNo * Factorail(iNo - 1);
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
