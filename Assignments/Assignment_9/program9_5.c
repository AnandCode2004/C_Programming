#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : FactorialDiff
///     Input            : Integer
///     Output           : Integer (Returns difference)
///     Description      : Calculate difference between even and odd factorial
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    iDiff = iEvenFact - iOddFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      5                         -7       (8 - 15)
///     -5                         -7       (8 - 15)
///     10                         2895     (3840 - 945)
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////