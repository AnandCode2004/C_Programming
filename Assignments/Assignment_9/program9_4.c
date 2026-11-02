#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : OddFactorial
///     Input            : Integer
///     Output           : Integer (Returns odd factorial)
///     Description      : Calculate the product of all odd numbers up to the given number
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is: %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      5                         15      (5 * 3 * 1)
///     -5                         15      (5 * 3 * 1)
///     10                         945     (9 * 7 * 5 * 3 * 1)
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////