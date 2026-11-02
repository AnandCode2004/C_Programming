#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : EvenFactorial
///     Input            : Integer
///     Output           : Integer (Returns even factorial)
///     Description      : Calculate the product of all even numbers up to the given number
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is: %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      5                         8       (4 * 2)
///     -5                         8       (4 * 2)
///     10                         3840    (10 * 8 * 6 * 4 * 2)
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////