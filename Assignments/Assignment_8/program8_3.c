/*Write a program to find factorail of give number.*/

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : DisplayNumber
///     Input            : Integer
///     Output           : Integer
///     Description      : Write a program to find factorail of give number
///     Date             : 31/10/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorail(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : \n");
    if((scanf("%d", &iValue) != 1))
    {
        printf("invalid input\n");
        return EXIT_FAILURE;
    }

    iRet = Factorail(iValue);
    printf("Factorial is : %d\n" , iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     
///                Testing 
///
///    ------------------------------------
///     Input                      Ouput
///    ------------------------------------
///      5                          120
///     -5                          120 
///      4                          24
///                             
///      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

