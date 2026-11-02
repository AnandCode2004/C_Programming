#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : DollarToINR
///     Input            : Integer
///     Output           : Integer (Returns Indian currency)
///     Description      : Convert US Dollars into Indian Rupees
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iRet = 0;

    iRet = iNo * 70;

    return iRet;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is: %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      10                        700
///       3                        210
///       3                        210
///    1200                      84000
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////